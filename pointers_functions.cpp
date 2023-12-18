#include <iostream>
using namespace std;

void modify(int *ptr)
{
    *ptr = 10;
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    // In C++, pointers can be passed as arguments to functions just like any other variable.
    // When a pointer is passed to a function, the function can access
    // and modify the data that the pointer points to.

    int x = 5;
    int *ptr = &x;

    cout << "Before function call: " << *ptr << endl;

    modify(ptr);

    cout << "After function call: " << *ptr << endl;

    x = 5;

    cout << "Reset variable to the initial value: " << x << endl;

    // Another way to pass pointer to a function

    modify(&x);

    cout << "After function call: " << *ptr << endl;

    // A pointer to a function is a variable that stores the address of a function.
    // This allows the program to call a function indirectly through the pointer, rather than directly by name.

    int (*p)(int, int);       // Declare a pointer to a function
    p = &add;                 // Assign the address of the add function to the pointer
    int result = (*p)(5, 10); // Call the add function through the pointer
    cout << result << endl;   // 15

    return 0;
}