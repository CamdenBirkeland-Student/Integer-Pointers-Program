#include <iostream>
using namespace std;

int main() {
    // Variables to store user input
    int value1, value2, value3;

    // Prompt the user for input
    cout << "Enter three integer values:" << endl;
    cout << "Value 1: ";
    cin >> value1;
    cout << "Value 2: ";
    cin >> value2;
    cout << "Value 3: ";
    cin >> value3;

    // Dynamic memory allocation for the variables
    int *ptr1 = new int;
    int *ptr2 = new int;
    int *ptr3 = new int;

    // Store the values in the dynamic memory locations
    *ptr1 = value1;
    *ptr2 = value2;
    *ptr3 = value3;

    // Display the values and their respective pointers
    cout << "\nValues and their pointers:" << endl;
    cout << "Value 1: " << value1 << " (Pointer points to: " << *ptr1 << ")" << endl;
    cout << "Value 2: " << value2 << " (Pointer points to: " << *ptr2 << ")" << endl;
    cout << "Value 3: " << value3 << " (Pointer points to: " << *ptr3 << ")" << endl;

    // Display the pointer addresses
    cout << "\nPointer addresses:" << endl;
    cout << "Pointer 1 address: " << ptr1 << endl;
    cout << "Pointer 2 address: " << ptr2 << endl;
    cout << "Pointer 3 address: " << ptr3 << endl;

    // Deallocate the memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // Set pointers to nullptr to avoid dangling pointers
    ptr1 = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;

    return 0;
}