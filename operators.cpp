#include <iostream>
using namespace std;

// Operators are symbols in C++ that perform specific operations on variables and values.
// There are different types of operators in C++,
// including arithmetic, relational, logical, and assignment operators.

int main()
{
    // Declare integer variables
    int a = 5, b = 2;

    // Arithmetic operators
    cout << "Arithmetic operators" << endl;
    cout << a + b << endl; // Output: 7
    cout << a - b << endl; // Output: 3
    cout << a * b << endl; // Output: 10
    cout << a / b << endl; // Output: 2
    cout << a % b << endl; // Output: 1

    // Relational operators
    cout << "Relational operators" << endl;
    cout << (a == b) << endl; // Output: 0(false)
    cout << (a != b) << endl; // Output: 1(true)
    cout << (a > b) << endl;  // Output: 1(true)
    cout << (a < b) << endl;  // Output: 0(false)

    // Declare boolean variables
    bool isRaining = true, isCold = false;

    // Logical operators
    cout << "Logical operators" << endl;
    cout << (isRaining && isCold) << endl; // Output: 0(false)
    cout << (isRaining || isCold) << endl; // Output: 1(true)
    cout << (!isRaining) << endl;          // Output: 0(false)

    // Assignment operators
    cout << "Assignment operators" << endl;
    int c = 5;
    cout << c << endl; // Output: 5
    c = 10;
    cout << c << endl; // Output: 10

    // Shorthand assignment operators
    cout << "Shorthand assignment operators" << endl;
    int d = 5;
    d += 2;            // same as d = d + 2
    cout << d << endl; // Output: 7
}