import hashlib
import datetime

class Block:
    def __init__(self, index, previous_hash, timestamp, data, hash, nonce):
        self.index = index
        self.hash = hash
        self.previous_hash = previous_hash
        self.timestamp = timestamp
        self.data = data
        self.nonce = nonce

    def __repr__(self):
        return f"Block(Index: {self.index}, Hash: {self.hash}, Previous Hash: {self.previous_hash}, Timestamp: {self.timestamp}, Data: {self.data}, Nonce: {self.nonce})"

class Blockchain:
    def __init__(self):
        self.chain = [self.create_genesis_block()]

    def create_genesis_block(self):
        timestamp = datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        return Block(0, "0", timestamp, "Genesis Block", self.hash_block(0, "0", timestamp, "Genesis Block", 0), 0)

    def get_latest_block(self):
        return self.chain[-1]
    
    # Connect the blocks using previous hash value
    def add_block(self, data):
        previous_block = self.get_latest_block()
        index = previous_block.index + 1
        timestamp = datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        previous_hash = previous_block.hash
        nonce = 0  # Set nonce to 0 as it's not used
        hash = self.hash_block(index, previous_hash, timestamp, data, nonce)
        new_block = Block(index, previous_hash, timestamp, data, hash, nonce)
        self.chain.append(new_block)
        
    # Compute hash for each block
    def hash_block(self, index, previous_hash, timestamp, data, nonce):
        value = f"{index}{previous_hash}{timestamp}{data}{nonce}"
        return hashlib.sha256(value.encode('utf-8')).hexdigest()
    
    # Check validity of the chain created
    def is_chain_valid(self):
        for i in range(1, len(self.chain)):
            current_block = self.chain[i]
            previous_block = self.chain[i-1]
            recalculated_hash = self.hash_block(current_block.index, current_block.previous_hash, current_block.timestamp, current_block.data, current_block.nonce)
            if current_block.hash != recalculated_hash:
                return False
            if current_block.previous_hash != previous_block.hash:
                return False
        return True

    def tamper_block(self, index, new_data):
        if 0 < index < len(self.chain):
            self.chain[index].data = new_data
            self.recalculate_block_hash(index)
    
    # If blocks are tampered recalculate the hash 
    def recalculate_block_hash(self, index):
        current_block = self.chain[index]
        previous_hash = self.chain[index-1].hash if index > 0 else "0"
        nonce = 0  # Set nonce to 0 as it's not used
        hash = self.hash_block(current_block.index, previous_hash, current_block.timestamp, current_block.data, nonce)
        current_block.hash = hash
        current_block.nonce = nonce
        current_block.previous_hash = previous_hash

if __name__ == "__main__":
    blockchain = Blockchain() 
    blockchain.add_block("Block 1")
    blockchain.add_block("Block 2")
    blockchain.add_block("Block 3")
    print("Initial Blockchain:")
    for block in blockchain.chain:
        print(block)
    print("\nBlockchain validity -> ", blockchain.is_chain_valid())
    blockchain.tamper_block(1, "Tampered Data")
    print("\nBlockchain post-tampering:")
    for block in blockchain.chain:
        print(block)
    print("\nBlockchain validity -> ", blockchain.is_chain_valid())
