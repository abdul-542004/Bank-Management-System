#pragma once
#include "LinkedList.h"
using namespace System;

public ref class BankCustomer {
public:
    int accountNumber;           // Account number
    String^ name;                // Customer name
    String^ cnic;                // Customer CNIC
    String^ gender;              // Customer gender
    String^ accountType;         // Account type (e.g., Savings, Current)
    String^ pin;                 // PIN for the account
    double balance;              // Account balance
    LinkedList<String^>^ transactionHistory; // to track history

    // Constructor
    BankCustomer(
        int accNum,
        String^ custName,
        String^ custCnic,
        String^ custGender,
        String^ accType,
        String^ accPin,
        double initialBalance

    ) {
        accountNumber = accNum;
        name = custName;
        cnic = custCnic;
        gender = custGender;
        accountType = accType;
        pin = accPin;
        balance = initialBalance;
        transactionHistory = gcnew LinkedList<String^>();
    }

    

    String^ GetTransactionHistory() {
        String^ logs = "";
        Node<String^>^ current = transactionHistory->GetHead(); // Start from the head of the list
        while (current != nullptr) {
            logs += "-> " + current->Data + " on " + current->timestamp.ToString() + "\n";
            current = current->Next; // Move to the next node
        }
        return logs;
    }

};
