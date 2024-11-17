#pragma once

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
using namespace System;

ref struct AVLNode { // CLR-compatible reference type
    String^ Name;         // CLR String for name
    String^ CNIC;         // CLR String for CNIC
    char Gender;          // Gender (single character: M/F)
    String^ Type;         // CLR String for account type
    int AccNumber;        // Account number (unique identifier)
    int Pin;              // PIN for the account
    int Balance;          // Account balance

    AVLNode^ Left;        // Pointer to the left child
    AVLNode^ Right;       // Pointer to the right child
    int Height;           // Height of the node in the AVL tree

    // Constructor for initialization
    AVLNode(String^ name, String^ cnic, char gender, String^ type, int accNumber, int pin, int balance) {
        Name = name;
        CNIC = cnic;
        Gender = gender;
        Type = type;
        AccNumber = accNumber;
        Pin = pin;
        Balance = balance;
        Left = nullptr;
        Right = nullptr;
        Height = 1;
    }
};

AVLNode^ Insert(AVLNode^ root, String^ name, String^ cnic, char gender, String^ type, int accNumber, int pin, int balance) {
    if (root == nullptr) {
        return gcnew AVLNode(name, cnic, gender, type, accNumber, pin, balance);
    }

    if (accNumber < root->AccNumber) {
        root->Left = Insert(root->Left, name, cnic, gender, type, accNumber, pin, balance);
    }
    else if (accNumber > root->AccNumber) {
        root->Right = Insert(root->Right, name, cnic, gender, type, accNumber, pin, balance);
    }
    else {
        // Duplicate account number not allowed
        Console::WriteLine("Duplicate account number.");
        return root;
    }

    // Update height and balance the tree
    root->Height = 1 + max(Height(root->Left), Height(root->Right));
    return Balance(root);
}
int Height(AVLNode^ node) {
    return (node == nullptr) ? 0 : node->Height;
}

int BalanceFactor(AVLNode^ node) {
    return (node == nullptr) ? 0 : Height(node->Left) - Height(node->Right);
}
AVLNode^ Balance(AVLNode^ node) {
    if (node == nullptr)
        return node;

    // Update height of the current node
    node->Height = 1 + max(Height(node->Left), Height(node->Right));

    // Calculate the balance factor
    int balanceFactor = BalanceFactor(node);

    // Left Heavy
    if (balanceFactor > 1) {
        if (BalanceFactor(node->Left) >= 0) {
            // Left-Left case
            return RotateRight(node);
        }
        else {
            // Left-Right case
            node->Left = RotateLeft(node->Left);
            return RotateRight(node);
        }
    }

    // Right Heavy
    if (balanceFactor < -1) {
        if (BalanceFactor(node->Right) <= 0) {
            // Right-Right case
            return RotateLeft(node);
        }
        else {
            // Right-Left case
            node->Right = RotateRight(node->Right);
            return RotateLeft(node);
        }
    }

    // Node is balanced
    return node;
}


AVLNode^ RotateRight(AVLNode^ y) {
    AVLNode^ x = y->Left;
    AVLNode^ T2 = x->Right;

    // Perform rotation
    x->Right = y;
    y->Left = T2;

    // Update heights
    y->Height = max(Height(y->Left), Height(y->Right)) + 1;
    x->Height = max(Height(x->Left), Height(x->Right)) + 1;

    return x;
}

AVLNode^ RotateLeft(AVLNode^ x) {
    AVLNode^ y = x->Right;
    AVLNode^ T2 = y->Left;

    // Perform rotation
    y->Left = x;
    x->Right = T2;

    // Update heights
    x->Height = max(Height(x->Left), Height(x->Right)) + 1;
    y->Height = max(Height(y->Left), Height(y->Right)) + 1;

    return y;
}
