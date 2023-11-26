#include <iostream>
using namespace std;

// C++ provides inline functions to reduce the function call overhead.
// An inline function is a function that is expanded in line when it is called.
// When the inline function is called whole code of the inline function gets inserted or
// substituted at the point of the inline function call.
// This substitution is performed by the C++ compiler at compile time.
// An inline function may increase efficiency if it is small.

inline int add(int a, int b)
{
    return a + b;
}

int main()
{
    cout << add(8, 9) << endl;
    return 0;
}

// Inline functions are commonly used for small, frequently used functions,
// such as getter and setter functions in classes.
// They can also be used to optimize functions that are called in a loop or in performance-critical code.