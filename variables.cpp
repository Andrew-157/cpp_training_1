#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = (float)a;
    cout << b << endl; // 10

    int c = 5;
    float d = float(c) / 2;
    cout << d << endl; // 2.5

    char grade = 'A';
    int score = (int)grade;
    cout << score << endl; // 65 - the ASCII code for character 'A'

    return 0;
}