#include <iostream>
using namespace std;

// Return Value
// This function calculates the area of a rectangle
int calculateArea(int length, int width)
{
    int area = length * width;
    return area; // returns the calculates area
}

// Scope

int globalVariable = 10; // variable with global scope

void myFunction()
{
    int localVariable = 5;                                       // variable with local scope
    cout << "Local variable value: " << localVariable << endl;   // prints the value of the local variable
    cout << "Global variable value: " << globalVariable << endl; // prints the value of the global variable
}

int main()
{
    int rectangleArea = calculateArea(5, 10);                          // calls the function and assigns the return value to a variable
    cout << "The area of the rectangle is: " << rectangleArea << endl; // prints the return value

    myFunction();                                                // calls the function
    cout << "Global variable value: " << globalVariable << endl; // prints the value of the global variable

    // cout << "Local variable value: " << localVariable << endl; // this would result in an error, as the local variable is out of scope
    return 0;
}
