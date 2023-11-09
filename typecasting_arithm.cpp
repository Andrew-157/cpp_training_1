#include <iostream>
using namespace std;

// Typecasting, also known as type conversion,
// is the process of converting one data type to another.
// In C++, when arithmetic operations involve operands of different data types,
// the operands may be automatically converted to a common data type according to certain
// rules known as "usual arithmetic conversions." However, in some cases,
// it may be necessary to explicitly cast one operand to a
// different data type to ensure that the arithmetic operation is performed correctly.

// Examples of typecasting in arithmetic operations

int main()
{
    // 1. Implicit typecasting: This occurs when the compiler automatically converts one data type to
    // another to perform an arithmetic operation.

    int a = 5;
    double b = 3.5;
    double c = a + b;  // a is implicitly converted to double before the addition
    cout << c << endl; // Output: 8.5

    // 2. Explicit typecasting: This occurs when the programmer explicitly casts
    // one data type to another using a typecast operator.
    // The general syntax for a typecast operator is (type) value.

    int e = 5;
    double f = 3.5;
    int h = (int)f;       // f is explicitly cast to int
    double g = (double)e; // e is explicitly cast to double

    // Note that when casting from a larger data type to a smaller data type,
    // the value may be truncated or rounded, which can result in loss of precision.

    double pi = 3.14159;
    int y = (int)pi; // b will be 3 (truncated)

    // In general, it is a good practice to avoid typecasting whenever possible and to ensure that
    // operands of arithmetic operations have compatible data types
    // to avoid potential errors or loss of precision.

    return 0;
}