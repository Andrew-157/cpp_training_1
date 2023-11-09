#include <iostream>
using namespace std;

// 1. Declare a variable named sum of type int.
// 2. Assign sum the value of the sum of myInt and myDouble,
// after converting myDouble to an int using the cast operator.
// 3. Print the value of sum to the console.

int main()
{
    int myInt;
    myInt = 23;

    double myDouble;
    myDouble = 23.4556;

    int sum;

    sum = (int)myDouble + myInt;

    cout << sum << endl;

    return 0;
}