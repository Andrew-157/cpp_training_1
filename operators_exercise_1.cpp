#include <iostream>
using namespace std;

// Logical operators

// 1. Declare two boolean variables named a and b.
// 2. Initialize a to true and b to false.
// 3. Declare a third boolean variable named result.
// 4. Initialize result to the result of the && operator applied to a and b.
// 5. Print the value of result to the console.
// 6. Initialize result to the result of the || operator applied to a and b.
// 7. Print the value of result to the console.
// 8. Initialize result to the result of the ! operator applied to a.
// 9. Print the value of result to the console.

int main()
{
    bool a = true, b = false;
    bool result;

    result = (a && b);
    cout << result << endl; // Output: 0(false)

    result = (a || b);
    cout << result << endl; // Output: 1(true)

    result = result != a;
    cout << result << endl; // Output: 0(false)

    return 0;
}