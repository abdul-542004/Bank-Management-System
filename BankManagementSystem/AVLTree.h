#pragma once
#include "AVLNode.h"
#include "DynamicArray.h"

public ref class AVLTree {
private:
    AVLNode^ root;

    int GetHeight(AVLNode^ node) {
        return (node == nullptr) ? 0 : node->height;
    }

    int GetBalanceFactor(AVLNode^ node) {
        return (node == nullptr) ? 0 : GetHeight(node->left) - GetHeight(node->right);
    }

    AVLNode^ RightRotate(AVLNode^ y) {
        AVLNode^ x = y->left;
        AVLNode^ T2 = x->right;

        x->right = y;
        y->left = T2;

        y->height = Math::Max(GetHeight(y->left), GetHeight(y->right)) + 1;
        x->height = Math::Max(GetHeight(x->left), GetHeight(x->right)) + 1;

        return x;
    }

    AVLNode^ LeftRotate(AVLNode^ x) {
        AVLNode^ y = x->right;
        AVLNode^ T2 = y->left;

        y->left = x;
        x->right = T2;

        x->height = Math::Max(GetHeight(x->left), GetHeight(x->right)) + 1;
        y->height = Math::Max(GetHeight(y->left), GetHeight(y->right)) + 1;

        return y;
    }

    AVLNode^ InsertNode(AVLNode^ node, BankCustomer^ customer) {
        if (node == nullptr) {
            return gcnew AVLNode(customer);
        }

        if (customer->accountNumber < node->customer->accountNumber) {
            node->left = InsertNode(node->left, customer);
        }
        else if (customer->accountNumber > node->customer->accountNumber) {
            node->right = InsertNode(node->right, customer);
        }
        else {
            return node; // Duplicate account numbers are not allowed
        }

        node->height = 1 + Math::Max(GetHeight(node->left), GetHeight(node->right));

        int balanceFactor = GetBalanceFactor(node);

        // Balance the tree
        if (balanceFactor > 1 && customer->accountNumber < node->left->customer->accountNumber) {
            return RightRotate(node);
        }

        if (balanceFactor < -1 && customer->accountNumber > node->right->customer->accountNumber) {
            return LeftRotate(node);
        }

        if (balanceFactor > 1 && customer->accountNumber > node->left->customer->accountNumber) {
            node->left = LeftRotate(node->left);
            return RightRotate(node);
        }

        if (balanceFactor < -1 && customer->accountNumber < node->right->customer->accountNumber) {
            node->right = RightRotate(node->right);
            return LeftRotate(node);
        }

        return node;
    }

    AVLNode^ MinValueNode(AVLNode^ node) {
        AVLNode^ current = node;
        while (current->left != nullptr) {
            current = current->left;
        }
        return current;
    }

    bool DeleteNode(AVLNode^% root, int accountNumber) {
        if (root == nullptr) {
            return false; // Node not found
        }

        // Find the node to delete
        if (accountNumber < root->customer->accountNumber) {
            return DeleteNode(root->left, accountNumber);
        }
        else if (accountNumber > root->customer->accountNumber) {
            return DeleteNode(root->right, accountNumber);
        }
        else {
            // Node to be deleted found
            if (root->left == nullptr || root->right == nullptr) {
                // Node has one or no child
                AVLNode^ temp = root->left ? root->left : root->right;
                if (temp == nullptr) {
                    temp = root;
                    root = nullptr;
                }
                else {
                    // Copy data of the non-null child to the root
                    root->customer = temp->customer;
                    root->left = temp->left;
                    root->right = temp->right;
                }
                delete temp; // Delete the temporary node
                return true;
            }
            else {
                // Node has two children
                AVLNode^ temp = MinValueNode(root->right);
                root->customer = temp->customer;  // Copy the in-order successor's data
                return DeleteNode(root->right, temp->customer->accountNumber); // Delete the in-order successor
            }
        }

        // If the tree had only one node, return it
        if (root == nullptr) {
            return false;
        }

        // Update height of the current node
        root->height = 1 + Math::Max(GetHeight(root->left), GetHeight(root->right));

        // Get balance factor and check for imbalance
        int balanceFactor = GetBalanceFactor(root);

        // Left Left Case
        if (balanceFactor > 1 && GetBalanceFactor(root->left) >= 0) {
            root = RightRotate(root);
            return true;
        }

        // Right Right Case
        if (balanceFactor < -1 && GetBalanceFactor(root->right) <= 0) {
            root = LeftRotate(root);
            return true;
        }

        // Left Right Case
        if (balanceFactor > 1 && GetBalanceFactor(root->left) < 0) {
            root->left = LeftRotate(root->left);
            root = RightRotate(root);
            return true;
        }

        // Right Left Case
        if (balanceFactor < -1 && GetBalanceFactor(root->right) > 0) {
            root->right = RightRotate(root->right);
            root = LeftRotate(root);
            return true;
        }

        return true;
    }

    

    // Search function
    BankCustomer^ SearchNode(AVLNode^ node, int accountNumber) {
        if (node == nullptr) {
            return nullptr; // Account not found
        }

        if (accountNumber == node->customer->accountNumber) {
            return node->customer; // Account found
        }
        else if (accountNumber < node->customer->accountNumber) {
            return SearchNode(node->left, accountNumber); // Search in the left subtree
        }
        else {
            return SearchNode(node->right, accountNumber); // Search in the right subtree
        }
    }

    // Recursive method to perform an inorder traversal and collect BankCustomer objects
    void InOrderTraversal(AVLNode^ node, DynamicArray<BankCustomer^>^% customers) {
        if (node != nullptr) {
            // Traverse left subtree
            InOrderTraversal(node->left, customers);

            // Add the current node's customer to the list
            customers->push_back(node->customer);

            // Traverse right subtree
            InOrderTraversal(node->right, customers);
        }
    }

    static int counter = 1000;

public:
    AVLTree() {
        root = nullptr;
    }

    int GenerateUniqueKey() {
        return counter++;          // Increment counter and return the current value
    }

    void Insert(BankCustomer^ customer) {
        root = InsertNode(root, customer);
    }

    bool Delete(int accountNumber) {
        bool success = false;
        if (DeleteNode(root, accountNumber)) {
            success = true;
        }
        return success;
    }

    // Search for a customer by account number
    BankCustomer^ Search(int accountNumber) {
        return SearchNode(root, accountNumber);
    }

    
    // Inorder Traversal
    void Traversal(DynamicArray<BankCustomer^>^% customers){
        InOrderTraversal(root, customers);
    }

    void EditInformation(int accountNumber, BankCustomer^ updatedCustomer) {
        // Search for the node containing the customer to update
        BankCustomer^ customer = SearchNode(root, accountNumber);
        if (customer != nullptr) {
            // Update the customer data
            customer = updatedCustomer;
        }
    }

    // Deposit funds into a customer's account with PIN validation
    bool Deposit(int accountNumber, String^ enteredPin, double amount) {
        // Find the customer using SearchNode
        BankCustomer^ customer = SearchNode(root, accountNumber);
        if (customer == nullptr || amount <= 0 || customer->pin != enteredPin) {
            return false; // Customer not found, invalid amount, or incorrect PIN
        }

        customer->balance += amount; // Add the deposit amount to balance

        // Add transaction to the customer's history
        customer->transactionHistory->AddLast(
            "Deposited Rs." + amount.ToString("F2")
        );

        return true;
    }

    // Withdraw funds from a customer's account with PIN validation
    bool Withdraw(int accountNumber, String^ enteredPin, double amount) {
        // Find the customer using SearchNode
        BankCustomer^ customer = SearchNode(root, accountNumber);
        if (customer == nullptr || amount <= 0 || customer->balance < amount || customer->pin != enteredPin) {
            return false; // Customer not found, invalid amount, insufficient funds, or incorrect PIN
        }

        customer->balance -= amount; // Subtract the withdrawal amount from balance

        // Add transaction to the customer's history
        customer->transactionHistory->AddLast(
            "Withdrew Rs." + amount.ToString("F2")
        );

        return true;
    }

    void SaveToFile(String^ filePath) {
        System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filePath);
        DynamicArray<BankCustomer^>^ customers = gcnew DynamicArray<BankCustomer^>();
        Traversal(customers); // Get all customers in-order

        for (int i = 0; i < customers->getSize(); i++) {
            BankCustomer^ customer = customers[i];
            writer->Write(customer->accountNumber + "|");
            writer->Write(customer->name + "|");
            writer->Write(customer->cnic + "|");
            writer->Write(customer->gender + "|");
            writer->Write(customer->accountType + "|");
            writer->Write(customer->pin + "|");
            writer->Write(customer->balance.ToString() + "|");

            // Serialize transaction history
            LinkedList<String^>^ history = customer->transactionHistory;
            Node<String^>^ current = history->GetHead();
            while (current != nullptr) {
                writer->Write(current->Data);
                if (current->Next != nullptr) writer->Write(";");
                current = current->Next;
            }
            writer->WriteLine();
        }

        writer->Close();
    }

    // Load data from a file into the AVL tree
    void LoadFromFile(String^ filePath) {
        if (!System::IO::File::Exists(filePath)) return;

        System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filePath);
        int highestAccountNumber = 1000; // Starting point for account numbers

        while (!reader->EndOfStream) {
            String^ line = reader->ReadLine();
            array<String^>^ parts = line->Split('|');
            if (parts->Length < 7) continue; // Skip invalid lines

            

            int accountNumber = Int32::Parse(parts[0]);
            highestAccountNumber = Math::Max(highestAccountNumber, accountNumber); // Track the highest account number
            String^ name = parts[1];
            String^ cnic = parts[2];
            String^ gender = parts[3];
            String^ accountType = parts[4];
            String^ pin = parts[5];
            double balance = Double::Parse(parts[6]);

            // Deserialize transaction history
            LinkedList<String^>^ history = gcnew LinkedList<String^>();
            if (parts->Length > 7) {
                array<String^>^ transactions = parts[7]->Split(';');
                for each (String ^ transaction in transactions) {
                    history->AddLast(transaction);
                }
            }

            BankCustomer^ customer = gcnew BankCustomer(
                accountNumber, name, cnic, gender, accountType, pin, balance
            );
            customer->transactionHistory = history;

            Insert(customer); // Insert the customer into the tree
        }

        reader->Close();
        // After loading, update the counter to the next available unique key
        counter = highestAccountNumber + 1;
    }

    
};
