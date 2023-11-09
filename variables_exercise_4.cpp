#include <iostream>
using namespace std;

// 1. Declare a variable named myString of type std::string inside a block or scope of your choice.
// 2. Assign myString a value of your choice.
// 3. Print the value of myString to the console inside the same block or scope where it was declared.
// 4. Attempt to print the value of myString to the console outside the block or scope where it was declared.
// Observe the error message that is produced.

int main()
{
    {
        string myString = "String";
        cout << myString << endl;
    }
    // Uncomment the following line and observe an error
    // cout << myString << endl;

    return 0;
}