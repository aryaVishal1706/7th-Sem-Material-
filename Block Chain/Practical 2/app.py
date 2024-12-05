import tkinter as tk
from tkinter import scrolledtext, simpledialog, messagebox
import datetime
import hashlib

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
    def __init__(self, difficulty=1):
        self.chain = [self.create_genesis_block()]
        self.difficulty = difficulty

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
        nonce, hash = self.proof_of_work(index, previous_hash, timestamp, data)
        new_block = Block(index, previous_hash, timestamp, data, hash, nonce)
        self.chain.append(new_block)

    def hash_block(self, index, previous_hash, timestamp, data, nonce):
        value = f"{index}{previous_hash}{timestamp}{data}{nonce}"
        return hashlib.sha256(value.encode('utf-8')).hexdigest()

    def proof_of_work(self, index, previous_hash, timestamp, data):
        nonce = 0
        while True:
            hash = self.hash_block(index, previous_hash, timestamp, data, nonce)
            if hash[:self.difficulty] == '0' * self.difficulty:
                return nonce, hash
            nonce += 1

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
        nonce, hash = self.proof_of_work(current_block.index, previous_hash, current_block.timestamp, current_block.data)
        current_block.hash = hash
        current_block.nonce = nonce
        current_block.previous_hash = previous_hash

class BlockchainGUI:
    def __init__(self, root):
        self.blockchain = Blockchain(difficulty=1)

        self.root = root
        self.root.title("Blockchain GUI")

        self.text_area = scrolledtext.ScrolledText(self.root, width=80, height=20)
        self.text_area.pack()

        self.add_block_button = tk.Button(self.root, text="Add Block", command=self.add_block)
        self.add_block_button.pack()

        self.tamper_block_button = tk.Button(self.root, text="Tamper Block", command=self.tamper_block)
        self.tamper_block_button.pack()

        self.validate_chain_button = tk.Button(self.root, text="Validate Chain", command=self.validate_chain)
        self.validate_chain_button.pack()

        self.update_display()

    def add_block(self):
        data = simpledialog.askstring("Input", "Enter block data:")
        if data:
            self.blockchain.add_block(data)
            self.update_display()

    def tamper_block(self):
        index = simpledialog.askinteger("Input", "Enter block index to tamper:")
        new_data = simpledialog.askstring("Input", "Enter new block data:")
        if index is not None and new_data:
            self.blockchain.tamper_block(index, new_data)
            self.update_display()

    def validate_chain(self):
        is_valid = self.blockchain.is_chain_valid()
        result = "Valid" if is_valid else "Invalid"
        messagebox.showinfo("Chain Validation", f"Blockchain is {result}")

    def update_display(self):
        self.text_area.delete(1.0, tk.END)
        for block in self.blockchain.chain:
            self.text_area.insert(tk.END, f"{block}\n")
        self.text_area.insert(tk.END, f"\nBlockchain Validity: {'Valid' if self.blockchain.is_chain_valid() else 'Invalid'}\n")

if __name__ == "__main__":
    root = tk.Tk()
    app = BlockchainGUI(root)
    root.mainloop()
