#include <iostream>
using namespace std;

int main()
{

    int candies;
    float price;
    double average_temp;
    char letter;

    candies = 10;
    price = 2.5;
    average_temp = 75.6;
    letter = 'A';

    // int: used for whole numbers, such as -2, 0, 1, 100, etc.
    // float: used for fractional numbers with single precision, such as 3.14, 0.01, 1.23, etc.
    // double: used for fractional numbers with double precision, such as 3.14159, 0.000000001, 1.23456, etc.
    // char: used for single characters, such as 'A', 'b', 'Z', etc.

    int a = 10;
    // Type casting
    float b = (float)a;
    cout << b << endl; // 10

    int c = 5;
    // Type casting
    float d = float(c) / 2;
    cout << d << endl; // 2.5

    char grade = 'A';
    // Type casting
    int score = (int)grade;
    cout << score << endl; // 65 - the ASCII code for character 'A'

    return 0;
}