#include <iostream>
using namespace std;

// 1. Define a function named power that takes two double arguments base and exponent.
// 2. Inside the power function, calculate the value of base raised to the power of exponent.
// 3. Return the result.
// 4. Call the power function with a base of 2.0 and an exponent of 3.0, and print the result to the console.

double power(double base, double exponent)
{
    int result = base;
    while (exponent != 1)
    {
        result *= base;
        exponent--;
    };
    return result;
}

int main()
{
    cout << power(2.0, 3.0) << endl;
}