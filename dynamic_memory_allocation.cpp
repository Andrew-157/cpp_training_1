#include <iostream>
using namespace std;

// Dynamic memory allocation is the process of allocating memory during runtime rather than at compile-time.
// This allows the program to create and manage memory dynamically as needed,
// rather than having a fixed amount of memory allocated at the start of the program.

int main()
{
    // In C++, we can use the new and delete operators to allocate and deallocate memory dynamically.
    // The new operator is used to allocate memory for a new object or array,
    // while the delete operator is used to release the memory when it is no longer needed.

    // Here is an example of dynamic memory allocation using new and delete:

    int *p = new int; // Allocate memory for an integer
    *p = 5;           // Assign a value to the integer
    delete p;         // Deallocate the memory when it is no longer needed

    // In this example, we first declare a pointer p and use the new operator to allocate memory for an integer.
    // We then assign a value to the integer using the * operator to dereference the pointer.
    // Finally, we use the delete operator to deallocate the memory when we are finished using it.

    // We can also use the new operator to allocate memory for arrays:
    int *arr = new int[5]; // Allocate memory for an array of integers
    arr[0] = 1;            // Assign values to the elements of the array
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    delete[] arr; // Deallocate the memory when it is no longer needed

    // In this example, we use the new operator to allocate memory for an array of integers with five elements.
    // We can access and manipulate the elements of the array using the [] operator.
    // Finally, we use the delete[] operator to deallocate the memory when we are finished using it.

    // A memory leak occurs when a program fails to deallocate memory that is no longer needed,
    // resulting in a gradual accumulation of unused memory. This can eventually
    // lead to the program running out of memory and crashing.

    // To avoid memory leaks, it is important to ensure that all dynamically
    //  allocated memory is properly deallocated when it is no longer needed.
    // This can be done using the delete operator for single objects and the delete[] operator for arrays.
    // It is also a good practice to set pointers to NULL after deallocating them
    // to avoid accidentally accessing memory that has already been deallocated.

    // Here is an example of how to avoid a memory leak :

    int *a = new int; // Allocate memory for an integer
    *a = 5;           // Assign a value to the integer
    delete a;         // Deallocate the memory
    a = NULL;         // Set the pointer to NULL to avoid accessing deallocated memory

    // In this example, we properly deallocate the memory using the
    // delete operator and then set the pointer to NULL to avoid
    // accessing the deallocated memory. This ensures that there are no memory leaks in the program.

    return 0;
}