#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter an integer between 1 and 5: ";
    cin >> choice;

    // cout << "Your integer is: " << choice << endl;

    switch (choice)
    {
    case 1:
        cout << "You chose option 1" << endl;
        break;
    case 2:
        cout << "You chose option 2" << endl;
        break;
    case 3:
        cout << "You chose option 3" << endl;
        break;
    case 4:
        cout << "You chose option 4" << endl;
        break;
    case 5:
        cout << "You chose option 5" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}