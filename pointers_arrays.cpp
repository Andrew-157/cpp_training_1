#include <iostream>
using namespace std;

void printArray(int *rpt, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(rpt + i) << " ";
    }
}

int main()
{
    // Use pointer with array
    int myArray[5] = {67, 55, 21, 30, 44};
    int *ptr = myArray;

    cout << *ptr << endl;

    // Access array elements with a pointer

    int arr[5] = {1, 2, 3, 4, 5};
    int *tpr = arr; // point to the first element of the array

    cout << *tpr << endl; // 1

    cout << *(tpr + 2) << endl; // 3

    // Passing of an array into a function using a pointer
    // When we pass an array to a function,
    // we are actually passing a pointer to the first element of the array.

    int rra[5] = {1, 2, 3, 4, 5};
    int *rpt = rra;
    printArray(rpt, 5);

    return 0;
}