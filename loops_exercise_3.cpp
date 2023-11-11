#include <iostream>
using namespace std;

// 1. Declare an integer variable named x.
// 2. Initialize x to a value of your choice.
// 3. Write a do-while loop that repeatedly prompts the user to enter a number until
// the user enters a number that is greater than or equal to x.
// 4. Print the value entered by the user to the console.

int main()
{
    int x = 10;
    int user_int;
    do
    {
        cout << "Enter any integer: ";
        cin >> user_int;
        cout << "Integer you entered: " << user_int << endl;
    } while (user_int < x);

    return 0;
}