#include <iostream>
using namespace std;

// A pointer is a variable that stores the memory address of another variable.
// Pointers are used to indirectly access and manipulate data stored in memory.
// They provide a powerful and flexible way to work with data structures and dynamic memory allocation in C++.

int main()
{
    // Pointer to an integer variable:
    int *ptr;

    int x = 5;
    // To initialize a pointer, we can assign it the address of a variable using the & operator.
    int *y = &x;

    cout << *y << endl; // 5

    // if you want ptr to point to x, '*' operator is not used:
    ptr = &x;

    cout << *ptr << endl; // 5

    // In this example, the * operator is used to dereference the pointer
    // and access the value of the x variable indirectly through the pointer.

    return 0;
}