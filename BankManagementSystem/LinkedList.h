#pragma once

using namespace System;

generic <typename T>
ref class Node {
public:
    T Data;
    Node^ Next;
    DateTime timestamp;  // Store the date and time when the node was added

    Node(T data) {
        Data = data;
        Next = nullptr;
        timestamp = DateTime::Now;  // Set the current date and time when the node is created
    }
};

generic <typename T>
ref class LinkedList {
private:
    Node<T>^ head;
    int size; // Keeps track of the number of nodes

public:
    LinkedList() {
        head = nullptr;
        size = 0;
    }

    // Get the size of the list
    int GetSize() {
        return size;
    }

    // Get the head of list
    Node<T>^ GetHead() {
        return head;
    }


    // Add a new node at the end
    void AddLast(T data) {
        Node<T>^ newNode = gcnew Node<T>(data);
        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node<T>^ temp = head;
            while (temp->Next != nullptr) {
                temp = temp->Next;
            }
            temp->Next = newNode;
        }
        size++; // Increment size
    }

    // Add a new node at the beginning
    void AddFirst(T data) {
        Node<T>^ newNode = gcnew Node<T>(data);
        newNode->Next = head;
        head = newNode;
        size++; // Increment size
    }

    // Delete the first node with the specified data
    bool Delete(T data) {
        if (head == nullptr) {
            return false; // List is empty
        }

        if (head->Data->Equals(data)) {
            head = head->Next; // Remove the head node
            size--; // Decrement size
            return true;
        }

        Node<T>^ current = head;
        while (current->Next != nullptr && !current->Next->Data->Equals(data)) {
            current = current->Next;
        }

        if (current->Next != nullptr) {
            current->Next = current->Next->Next;
            size--; // Decrement size
            return true;
        }

        return false; // Data not found
    }

    // Display all nodes, including the timestamp
    String^ Display() {
        if (head == nullptr) {
            return "The list is empty.";
        }

        String^ result = "";
        Node<T>^ temp = head;
        while (temp != nullptr) {
            result += temp->Data->ToString() + " (Added on: " + temp->timestamp.ToString() + ") -> ";
            temp = temp->Next;
        }
        result += "null";
        return result;
    }

    // Find a node with the specified data
    bool Find(T data) {
        Node<T>^ temp = head;
        while (temp != nullptr) {
            if (temp->Data->Equals(data)) {
                return true;
            }
            temp = temp->Next;
        }
        return false;
    }

    // Clear the list
    void Clear() {
        head = nullptr; // Let the garbage collector handle the nodes
        size = 0;       // Reset size
    }
};
