#include <iostream>
using namespace std;

// In programming, we use multi-dimensional
// arrays when we need to store data in more than one dimension, such as a table
// or a matrix. For example, if we have a collection of data that is organized
// into rows and columns, we can use a
// two-dimensional array to store it.

int main()
{
    // To create a multi - dimensional array, we need to specify the size of each dimension.
    // For example, if we want to create a two - dimensional array
    // that can store a table with three rows and four columns, we would write:
    int table[3][4];

    // This creates an array with three rows and four columns,
    // and each element of the array can be accessed using two indices.
    // For example, to access the element in the second row and third column, we would write:
    int element = table[1][2];

    // We can also have arrays with more than two dimensions,
    // such as a three-dimensional array for storing data in a cube.
    // For example, we can create a three-dimensional array to store the sales data for each product in a store:
    int sales[3][4][5];

    // This creates an array with three dimensions : products, days, and hours.We can access
    // an element in this array using three indices : the product index, the day index, and the hour index.

    return 0;
}