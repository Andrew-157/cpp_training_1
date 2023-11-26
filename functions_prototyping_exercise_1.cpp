#include <iostream>
using namespace std;

// 1. Define a function named cube that takes an integer argument n and returns the cube of n.
// 2. Declare the cube function prototype at the top of the file.
// 3. In the main function, prompt the user to enter an integer value and store it in a variable named x.
// 4. Call the cube function with x as the argument and print the result to the console.

int cube(int n);

int main()
{
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    cout << "The cube of your integer is: " << cube(x) << endl;
}

int cube(int n)
{
    return n * n * n;
}