#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // For example, we could use a string stream to format our menu items and prices like this:
    string item1 = "Hamburger";
    double price1 = 9.99;
    string item2 = "Pizza";
    double price2 = 11.99;

    stringstream menu;

    menu << item1 << " - $" << fixed << setprecision(2) << price1 << endl;
    menu << item2 << " - $" << fixed << setprecision(2) << price2 << endl;

    cout << menu.str();

    // In this example, we 've created a string stream called menu and
    // added our menu items and prices to it using the << operator.
    // We' ve also used function formatting to ensure our prices are displayed with two decimal places.

    // Finally, we output our formatted menu to the screen using cout
    // and the str() function to get the string representation of our string stream.

    return 0;
}