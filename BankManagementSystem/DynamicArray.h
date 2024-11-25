#pragma once
#include <stdexcept>

using namespace System;


template <typename T>
public ref class DynamicArray
{
private:
    array<T>^ arr;    // Managed array (CLR array)
    int capacity;     // Maximum number of elements the array can hold
    int size;         // Current number of elements in the array

    // Resize the array when capacity is exceeded
    void resize()
    {
        capacity *= 2; // Double the capacity
        array<T>^ newArr = gcnew array<T>(capacity); // Allocate a new array with doubled capacity

        // Copy elements to the new array
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }

        arr = newArr; // Point to the new array
    }

    // Helper method for Quick Sort (partitioning)
    int Partition(array<T>^ arrayToSort, int low, int high, int criteria)
    {
        T pivot = arrayToSort[high];  // Pivot element
        int i = (low - 1); // Index of smaller element

        for (int j = low; j <= high - 1; j++) {
            bool swap = false;

            // Comparison based on the selected criteria (using integers)
            switch (criteria)
            {
            case 1: // Account ID
                swap = (arrayToSort[j]->accountNumber < pivot->accountNumber);
                break;

            case 2: // Name
                swap = (arrayToSort[j]->name->CompareTo(pivot->name) < 0);
                break;

            case 3: // Balance
                swap = (arrayToSort[j]->balance < pivot->balance);
                break;
            }

            // If the current element is less than the pivot based on the selected criteria, swap it
            if (swap) {
                i++; // Increment index of smaller element
                T temp = arrayToSort[i];
                arrayToSort[i] = arrayToSort[j];
                arrayToSort[j] = temp;
            }
        }

        // Swap the pivot element with the element at (i + 1)
        T temp2 = arrayToSort[i + 1];
        arrayToSort[i + 1] = arrayToSort[high];
        arrayToSort[high] = temp2;

        return (i + 1); // Return the partition index
    }

    // Quick Sort algorithm
    void QuickSort(array<T>^ arrayToSort, int low, int high, int criteria)
    {
        if (low < high) {
            // Partition the array
            int pi = Partition(arrayToSort, low, high, criteria);

            // Recursively sort the subarrays
            QuickSort(arrayToSort, low, pi - 1, criteria);
            QuickSort(arrayToSort, pi + 1, high, criteria);
        }
    }

public:
    // Constructor
    DynamicArray(int initialCapacity)
    {
        capacity = initialCapacity;
        size = 0;
        arr = gcnew array<T>(capacity); // Allocate initial array
    }

    DynamicArray(void)
    {
        capacity = 4;
        size = 0;
        arr = gcnew array<T>(capacity); // Allocate initial array
    }

    // Destructor
    ~DynamicArray()
    {
        // No need to manually delete array since it's managed by CLR
    }

    T operator[](int index) {
        if (index < 0 || index >= size) {
            throw gcnew ArgumentOutOfRangeException("index", "Index is out of range");
        }
        return arr[index];
    }

    // Add an element to the end of the array
    void push_back(T value)
    {
        if (size == capacity) {
            resize(); // Resize the array if we are out of space
        }
        arr[size++] = value; // Add value and increment the size
    }

    // Remove the last element from the array
    void pop_back()
    {
        if (size == 0) {
            throw gcnew InvalidOperationException("Array is empty!"); // Cannot pop from an empty array
        }
        size--; // Simply decrement the size
    }

    // Access an element at a given index (with bounds checking)
    T get_at(int index)
    {
        if (index < 0 || index >= size) {
            throw gcnew ArgumentOutOfRangeException("Index out of bounds!");
        }
        return arr[index];
    }

    // Get the current number of elements in the array
    int getSize()
    {
        return size;
    }

    // Get the current capacity of the array
    int getCapacity()
    {
        return capacity;
    }

    // Check if the array is empty
    bool isEmpty()
    {
        return size == 0;
    }

    // Print the array elements
    void print()
    {
        for (int i = 0; i < size; i++) {
            Console::WriteLine("Account: {0}, Name: {1}, Balance: {2}",
                arr[i]->accountNumber, arr[i]->name, arr[i]->balance);
        }
    }

    // Quick Sort: Returns a new sorted array based on the chosen criteria without affecting the original one
    DynamicArray<T>^ QuickSort(int criteria)
    {
        array<T>^ newArr = gcnew array<T>(size);
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i]; // Copy elements to a new array
        }

        // Perform Quick Sort on the new array with the selected criteria
        QuickSort(newArr, 0, size - 1, criteria);

        // Create a new DynamicArray and add the sorted elements
        DynamicArray<T>^ sortedArray = gcnew DynamicArray<T>(size);
        for (int i = 0; i < size; i++) {
            sortedArray->push_back(newArr[i]);
        }

        return sortedArray; // Return the sorted array
    }
};
