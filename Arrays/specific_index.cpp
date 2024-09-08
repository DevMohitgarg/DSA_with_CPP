// Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.


#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;  // Define the maximum size of the array

int main() {
    int size;
    
    // Step 1: Ask the user for the size of the array
    cout << "Enter the size of the array (up to " << MAX_SIZE << "): ";
    cin >> size;

    // Check for valid size
    if (size <= 0 || size > MAX_SIZE) {
        cout << "Invalid size. The size must be a positive integer up to " << MAX_SIZE << "." << endl;
        return 1;
    }

    // Step 2: Create an array of the specified size
    int arr[MAX_SIZE];

    // Step 3: Populate the array with elements
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Step 4: Ask the user for the element they want to find
    int element;
    cout << "Enter the element to find: ";
    cin >> element;

    // Step 5: Search for the element in the array
    int index = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            index = i;
            break;
        }
    }

    // Step 6: Print the index of the element or -1 if not found
    cout << "Index of element " << element << ": " << index << endl;

    return 0;
}
