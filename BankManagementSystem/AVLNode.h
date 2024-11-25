#pragma once
#include "BankCustomer.h"
public ref class AVLNode {
public:
    BankCustomer^ customer;       // Reference to a BankCustomer object
    AVLNode^ left;                // Left child
    AVLNode^ right;               // Right child
    int height;                   // Height of the node

    // Constructor
    AVLNode(BankCustomer^ newCustomer) {
        customer = newCustomer;
        left = nullptr;
        right = nullptr;
        height = 1;
    }
};

