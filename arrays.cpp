#include <iostream>
using namespace std;

// Arrays are a fundamental data structure in computer science and are used to store
// a collection of data of the same type.

// The syntax for declaring an array in C++ is as follows:
// datatype arrayName[arraySize];

int main()
{
    // The syntax for declaring an array in C++ is as follows:
    // datatype arrayName[arraySize];

    // "datatype" specifies the data type of the elements in the array
    // "arrayName" is the name of the array
    // "arraySize" is the number of elements in the array

    // For example, to declare an array of integers with 5 elements, you would write:
    int myArray[5];

    // To initialize the elements of the array, you can use an initializer list like this:
    myArray[0] = 1;
    myArray[1] = 2;
    myArray[2] = 3;
    myArray[3] = 4;
    myArray[4] = 5;

    // You can access individual elements of the array using the array index, which starts at 0. For example:

    int x = myArray[2]; // Gets the third element of the array (index 2)
    myArray[4] = 10;    // Sets the fifth element of the array (index 4) to 10

    return 0;
}