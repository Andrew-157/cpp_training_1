#include <iostream>
using namespace std;

// A function prototype in C++ informs the compiler about the intention to use a function,
// along with its return type, parameters, and name.
// It is separate from the actual definition of the function.

// Function prototype for the first step
void prepareIngredients();

// Function prototype for the second step
void cookIngredients();

// Function prototype for the final step
void plateDish();

int main()
{
    // Call the prepareIngredients function
    prepareIngredients();

    // Call the cookIngredients function
    cookIngredients();

    // Call the plateDish function
    plateDish();

    return 0;
}

// Function definition for the first step
void prepareIngredients()
{
    // Code to prepare the ingredients goes here
    cout << "Step 1: Prepare the ingredients" << endl;
}

// Function definition for the second step
void cookIngredients()
{
    // Code to cook the ingredients goes here
    cout << "Step 2: Cook the ingredients" << endl;
}

// Function definition for the final step
void plateDish()
{
    // Code to plate the dish goes here
    cout << "Step 3: Plate the dish" << endl;
}

// In this way, you can call a function before defining it,
// just by declaring it at top of the program, and defining it after the main function.