#include <iostream>
using namespace std;

// Parameters are the variables defined in the function signature,
// and arguments are the values passed to those variables when the function is called.
// By using parameters and arguments,
// you can create more dynamic and customizable functions that can be used in various situations.

// Function prototype
void makePizza(string toppings, string size);

// Function implementation
void makePizza(string toppings, string size)
{
    // Code to actually make the pizza goes here
    cout << "You have ordered a " << size << " pizza with " << toppings << " toppings." << endl;
}

int main()
{
    // Example function calls
    makePizza("pepperoni", "medium");
    makePizza("mushrooms, onions, green peppers", "large");
}