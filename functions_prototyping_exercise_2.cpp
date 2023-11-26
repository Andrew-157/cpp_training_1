#include <iostream>
using namespace std;

// 1. Define two functions named add and subtract that take two integer arguments a and b and return
// the sum and difference of a and b, respectively.
// 2. Declare the add and subtract function prototypes at the top of the file.
// 3. In the main function, prompt the user to enter two integer values and store them in
// variables named x and y.
// 4. Call the add function with x and y as the arguments and print the result to the console.
// 5. Call the subtract function with x and y as the arguments and print the result to the console.

int add(int a, int b);

int subtract(int a, int b);

int main()
{
    int x, y;

    cout << "Enter the first integer: ";
    cin >> x;

    cout << "Enter the second integer: ";
    cin >> y;

    cout << " " << endl;

    cout << "The sum of your integers: " << add(x, y) << endl;

    cout << " " << endl;

    cout << "The difference of your integers: " << subtract(x, y) << endl;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}