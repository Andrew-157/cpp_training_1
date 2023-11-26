#include <iostream>
using namespace std;

// Function overloading is a feature in C++ that allows a programmer to
// define multiple functions with the same name, but with different parameters.
// This can be useful when you want to perform similar tasks on different types of data.

// Function to calculate the area of a rectangle
int area(int length, int width)
{
    return length * width;
}

// Function to calculate the area of a circle
double area(double radius)
{
    return 3.14159 * radius * radius;
}

// In this example, there are two functions with the same name area, but with different parameters.
// The first function calculates the area of a rectangle using its length and width,
// while the second function calculates the area of a circle using its radius.
// When the program calls the area function with different parameters,
// it will automatically choose the appropriate function based on the parameters passed in.

void print(int num)
{
    cout << "Printing integer: " << num << endl;
}

void print(double num)
{
    cout << "Printing double: " << num << endl;
}

int main()
{
    print(5);
    print(5.5);
    return 0;
}

// In this example, the print() function is overloaded with two different parameter types (an integer and a double),
// allowing it to be called with both types of arguments. The correct version of the function is chosen based on the
// argument passed. Overall, function overloading in C++ allows programmers to create more concise and readable code, by
// giving the same name to functions that perform similar tasks, but with different inputs. Here are the rules for function
// overloading in C++:

// Functions must have the same name. Functions must have different parameter lists. Parameter lists can differ in the
// number of parameters, the order of parameters, or the type of parameters. Return type of functions can be same or
// different. The compiler determines which function to call based on the number, types, and order of arguments passed to
// it during the function call. The best match is chosen based on the rules of function overload resolution. Function
// overloading can be done in the same class, or in different classes as long as the functions have the same name and
// different parameter lists.