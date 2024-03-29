#include <iostream>
using namespace std;

int main()
{
    // Declare two variables for examples
    int rideSpeed = 65;
    int speedLimit = 50;

    // if-statement
    if (rideSpeed > speedLimit)
    {
        cout << "The ride speed exceeds the speed limit!" << endl;
    }

    // (if + else)-statement
    if (rideSpeed == speedLimit)
    {
        cout << "The ride speed is at the speed limit." << endl;
    }
    else
    {
        cout << "The ride speed is not at the speed limit." << endl;
    }

    // (if + else if) - statement
    rideSpeed = 40;
    if (rideSpeed > speedLimit)
    {
        cout << "The ride speed exceeds the speed limit!" << endl;
    }
    else if (rideSpeed < speedLimit)
    {
        cout << "The ride speed is less than the speed limit!" << endl;
    }

    // nested conditions
    rideSpeed = speedLimit;
    if (rideSpeed != speedLimit)
    {
        if (rideSpeed > speedLimit)
        {
            cout << "The ride speed exceeds the speed limit!" << endl;
        }
        else
        {
            cout << "The ride speed is less than the speed limit!" << endl;
        }
    }
    else
    {
        cout << "The ride speed is at the speed limit." << endl;
    }

    // Use logical operators in if, else if
    speedLimit = 50, rideSpeed = 65;
    if (speedLimit == 50 && rideSpeed == 65)
    {
        cout << "The speed limit is 50 and the ride speed is 65." << endl;
    }

    // switch - statement
    int a = 20;

    switch (a)
    {
    case 10:
        cout << "a is 10" << endl;
        break;

    case 20:
        cout << "a is 20" << endl;
        break;
    default:
        cout << "switch-statement does not know what a is" << endl;
    }

    // If you remove "break", then all cases after the right one will
    // be executed no matter which values are there
    return 0;
}