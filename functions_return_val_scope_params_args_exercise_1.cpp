#include <iostream>
using namespace std;

// 1. Define a function named add that takes two integer arguments a and b.
// 2. Inside the add function, add a and b together and store the result in a local variable named sum.
// 3. Print the value of sum to the console.
// 4. Call the add function with two integer values of your choice.

void add(int a, int b)
{
    int sum = a + b;
    cout << "The sum is: " << sum << endl;
}

int main()
{

    add(7, 5);
    return 0;
}