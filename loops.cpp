#include <iostream>
using namespace std;

int main()
{
    // for-loop
    // In C++, you use a for loop when you know the exact number
    // of times you want the loop to run.
    cout << "For-loop:" << endl;
    int totalPushUps = 0;
    for (int i = 0; i <= 60; i++)
    {
        cout << "i is: " << i << " now." << endl;
    }

    // while-loop
    // In C++, you use a while loop when you don't
    // know exactly how many times you want the loop to run.
    cout << "While-loop:" << endl;
    int max = 10;
    int i = 0;

    while (i <= max)
    {
        cout << "i is: " << i << " now." << endl;
        i += 1;
    }

    // do-while loop
    // In C++, you use a do - while loop when you want to run the loop at
    // least once, regardless of the condition.
    cout << "Do-While loop:" << endl;
    int a = 0;

    do
    {
        cout << "a is: " << a << " now." << endl;
        a++;
    } while (a < 5);

    return 0;
}
