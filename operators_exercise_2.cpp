#include <iostream>
using namespace std;

// 1. Declare a boolean variable named c and initialize it to false.
// 2. Declare an integer variable named x and initialize it to 0.
// 3. Set the value of result to the result of the expression (c || (x = 42)).
// 4. Print the value of x to the console.

int main()
{
    bool c = false;
    int x = 0;

    bool result;

    result = (c || (x = 42));
    cout << x << endl; // Output: 42

    return 0;
}