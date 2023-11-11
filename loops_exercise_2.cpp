#include <iostream>
using namespace std;

// 1. Declare an integer variable named sum.
// 2. Initialize sum to 0.
// 3. Write a while loop that adds the numbers from 1 to 10 to sum.
// 4. Print the value of sum to the console.

int main()
{
    int sum = 0;
    int counter = 1;

    while (counter <= 10)
    {
        sum += counter;
        counter++;
    }

    cout << sum << endl;

    return 0;
}