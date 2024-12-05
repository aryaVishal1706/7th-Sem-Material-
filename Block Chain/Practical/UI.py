import hashlib
import datetime
import tkinter as tk
from tkinter import messagebox, simpledialog

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
    
    def add_block(self, data):
        previous_block = self.get_latest_block()
        index = previous_block.index + 1
        timestamp = datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        previous_hash = previous_block.hash
        nonce = 0  # Set nonce to 0 as it's not used
        hash = self.hash_block(index, previous_hash, timestamp, data, nonce)
        new_block = Block(index, previous_hash, timestamp, data, hash, nonce)
        self.chain.append(new_block)
        
    def hash_block(self, index, previous_hash, timestamp, data, nonce):
        value = f"{index}{previous_hash}{timestamp}{data}{nonce}"
        return hashlib.sha256(value.encode('utf-8')).hexdigest()
    
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
    
    def recalculate_block_hash(self, index):
        current_block = self.chain[index]
        previous_hash = self.chain[index-1].hash if index > 0 else "0"
        nonce = 0  # Set nonce to 0 as it's not used
        hash = self.hash_block(current_block.index, previous_hash, current_block.timestamp, current_block.data, nonce)
        current_block.hash = hash
        current_block.nonce = nonce
        current_block.previous_hash = previous_hash

class BlockchainUI(tk.Tk):
    def __init__(self, blockchain):
        super().__init__()
        self.blockchain = blockchain
        self.title("Blockchain UI")
        self.geometry("800x600")
        
        # UI Components
        self.add_block_button = tk.Button(self, text="Add Block", command=self.add_block)
        self.add_block_button.pack(pady=10)
        
        self.show_chain_button = tk.Button(self, text="Show Blockchain", command=self.show_blockchain)
        self.show_chain_button.pack(pady=10)
        
        self.check_validity_button = tk.Button(self, text="Check Validity", command=self.check_validity)
        self.check_validity_button.pack(pady=10)
        
        self.tamper_block_button = tk.Button(self, text="Tamper Block", command=self.tamper_block)
        self.tamper_block_button.pack(pady=10)
        
        self.output_text = tk.Text(self, wrap=tk.WORD, height=25, width=130)
        self.output_text.pack(pady=10)
    
    def add_block(self):
        data = simpledialog.askstring("Input", "Enter block data:")
        if data:
            self.blockchain.add_block(data)
            self.output_text.insert(tk.END, f"Added block with data: {data}\n")
            self.show_blockchain()
    
    def show_blockchain(self):
        self.output_text.delete(1.0, tk.END)
        for block in self.blockchain.chain:
            self.output_text.insert(tk.END, f"\t{block}\n\n")
    
    def check_validity(self):
        is_valid = self.blockchain.is_chain_valid()
        result = "Valid" if is_valid else "Invalid"
        self.output_text.insert(tk.END, f"Blockchain validity: {result}\n")
    
    def tamper_block(self):
        index = simpledialog.askinteger("Input", "Enter block index to tamper:")
        new_data = simpledialog.askstring("Input", "Enter new data for the block:")
        if index is not None and new_data:
            self.blockchain.tamper_block(index, new_data)
            self.output_text.insert(tk.END, f"Tampered block {index} with new data: {new_data}\n")

if __name__ == "__main__":
    blockchain = Blockchain()
    app = BlockchainUI(blockchain)
    app.mainloop()
