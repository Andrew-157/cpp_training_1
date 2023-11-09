#include <iostream>
using namespace std;

// 1. Prompt the user to enter an integer value.
// 2. Declare a variable named userInt of type int.
// 3. Read the integer value entered by the user from the console and store it in userInt.
// 4. Declare a variable named product of type int.
// 5. Assign product variable the product of myInt and userInt.
// 6. Print the value of product to the console.

int main()
{
    int myInt;
    myInt = 23;

    int userInt;
    cout << "Type a number: "; // if you do not use endl, then the value will be entered on the same line as 'Type a number'
    cin >> userInt;

    int product;

    product = myInt * userInt;

    cout << product << endl;
}