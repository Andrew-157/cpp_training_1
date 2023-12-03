#include <iostream>
using namespace std;

// In C++, we can perform arithmetic operations on pointers
// to navigate through memory and access data stored in arrays or other data structures.
// Pointer arithmetic is performed based on the size of the data type that the pointer points to.
// For example, if a pointer points to an integer variable, incrementing the pointer
// by one will increase its value by the size of an integer, usually 4 bytes.

int main()
{
    // Examples

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0]; // Point to the first element of the array

    cout << *ptr << endl; // 1

    ptr++; // Move the pointer to the next element of the array

    cout << *ptr << endl; // 2

    ptr += 2; // Move the pointer two elements ahead

    cout << *ptr << endl; // 4

    // Pointer expressions
    // A pointer expression is a combination of pointers and operators that evaluate to a value.
    // Pointer expressions can be used to perform operations
    // such as pointer arithmetic, comparison, and dereferencing.

    int x = 5;
    int *ptrX = &x;

    cout << ptrX << endl;  // 0x61fef0 (memory address of x)
    cout << *ptrX << endl; // 5 (value of x)

    int arrI[5] = {1, 2, 3, 4, 5};
    int *p = arrI + 2;

    // arrI + 2 gives an access to the third element of the array, stored at index 2
    // cout << arrI + 2 << endl; // Output: 0x61fee0
    // This is equivalent to using: &arrI[2]
    // cout << &arrI[2] << endl; // Output: 0x61fee0

    cout << *p << endl; // 3 (value of the third element of the array)

    // Pointer casting

    // Pointer casting is a way to convert a pointer of one data type to a pointer of another data type.
    // This can be useful in situations where we need to access data
    // in memory as a different data type than it was originally allocated.

    float f = 3.14;
    int *P = (int *)&f; // Cast the pointer to a float to a pointer to an int
    cout << P << endl;  // 1078523331

    // In this example, we first declare a float variable f with the value 3.14.
    // We then declare a pointer P that points to the memory address of f,
    // but we cast the pointer to a pointer to an int using the (int*) syntax.
    // We can use the pointer to access the memory as if it were an int,
    // even though it was originally allocated as a float.

    return 0;
}