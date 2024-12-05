from solcx import compile_source
from web3 import Web3

# Connect to a local Ethereum node
w3 = Web3(Web3.HTTPProvider('http://127.0.0.1:8545'))

# Check if connected to Ethereum
if w3.is_connected():
    print("Connected to Ethereum node")
else:
    print("Connection failed")

# Solidity Smart Contract Code for Smart Meter
smart_meter_contract = '''
pragma solidity ^0.8.0;

contract SmartMeter {
    address public owner;
    uint public totalEnergy;
    
    struct Consumer {
        uint energyConsumed;
        uint balance;
    }
    
    mapping(address => Consumer) public consumers;
    
    event EnergyConsumed(address consumer, uint amount);
    event BillPaid(address consumer, uint amount);
    event EnergyTraded(address from, address to, uint amount);
    
    constructor() {
        owner = msg.sender;
    }
    
    modifier onlyOwner() {
        require(msg.sender == owner, "Only the owner can perform this action");
        _;
    }

    function recordConsumption(address consumer, uint amount) public onlyOwner {
        consumers[consumer].energyConsumed += amount;
        totalEnergy += amount;
        emit EnergyConsumed(consumer, amount);
    }

    function payBill() public payable {
        require(consumers[msg.sender].energyConsumed > 0, "No consumption to pay for");
        consumers[msg.sender].balance += msg.value;
        emit BillPaid(msg.sender, msg.value);
    }

    function tradeEnergy(address to, uint amount) public {
        require(consumers[msg.sender].energyConsumed >= amount, "Not enough energy to trade");
        consumers[msg.sender].energyConsumed -= amount;
        consumers[to].energyConsumed += amount;
        emit EnergyTraded(msg.sender, to, amount);
    }

    function getEnergyBalance(address consumer) public view returns (uint) {
        return consumers[consumer].energyConsumed;
    }

    function getBalance(address consumer) public view returns (uint) {
        return consumers[consumer].balance;
    }
}
'''

# Compile the contract
compiled_sol = compile_source(smart_meter_contract)
contract_interface = compiled_sol['<stdin>:SmartMeter']

# Set up contract deployment
w3.eth.default_account = w3.eth.accounts[0]  # The account that will deploy the contract
SmartMeter = w3.eth.contract(abi=contract_interface['abi'], bytecode=contract_interface['bin'])

# Deploy the contract
tx_hash = SmartMeter.constructor().transact()
tx_receipt = w3.eth.wait_for_transaction_receipt(tx_hash)
contract_address = tx_receipt.contractAddress
print(f"Contract deployed at {contract_address}")

# Interact with the deployed contract
contract_instance = w3.eth.contract(address=contract_address, abi=contract_interface['abi'])

# Example usage: Record energy consumption for a consumer
consumer_address = w3.eth.accounts[1]  # Example consumer address
tx_hash = contract_instance.functions.recordConsumption(consumer_address, 100).transact()
w3.eth.wait_for_transaction_receipt(tx_hash)

# Pay Bill
tx_hash = contract_instance.functions.payBill().transact({'from': consumer_address, 'value': w3.toWei(1, 'ether')})
w3.eth.wait_for_transaction_receipt(tx_hash)

# Check energy consumption
energy_balance = contract_instance.functions.getEnergyBalance(consumer_address).call()
print(f"Energy balance for consumer {consumer_address}: {energy_balance} kWh")

# Check balance
balance = contract_instance.functions.getBalance(consumer_address).call()
print(f"Balance for consumer {consumer_address}: {balance} wei")
