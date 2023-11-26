#include <iostream>
using namespace std;

// Declare the Function
void func()
{
    cout << "Hello From The Function in C++" << endl;
}

// Declare the Function "pass by value"
void foo(int slices)
{
    slices++;
    cout << "Value inside the function 'pass by value' : " << slices << endl;
}

// Declare the Function "pass by reference"
void bar(int &logs)
{
    logs++;
    cout << "Value inside the function 'pass by reference' : " << logs << endl;
}

int main()
{
    // Call the Function
    func();

    cout << " " << endl;

    // Call the Function "pass by value"
    // The function receives a copy of the value,
    // but any changes made to the value within the function are not reflected outside of it.
    int slices = 4;
    cout << "Before function 'pass by value' call: " << slices << endl;
    foo(slices);
    cout << "After function 'pass by value' call: " << slices << endl;

    cout << " " << endl;

    // Call the Function "pass by reference"
    // Changes made within the function will be reflected outside of it.
    int logs = 3;
    cout << "Before function 'pass by reference' call:  " << logs << endl;
    bar(logs);
    cout << "After function 'pass by reference' call: " << logs << endl;

    return 0;
}