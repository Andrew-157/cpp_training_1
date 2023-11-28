#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// In programming, a string is a sequence of characters.It can include letters, numbers, symbols, and spaces.
// String manipulation involves changing or modifying a string in some way.

// Some common string manipulation operations include:
// 1. Concatenation: Combining two or more strings to create a new, longer string.
// 2. Substring: Extracting a portion of a string.
// 3. Replace: Replacing one substring with another.
// 4. Upper/lower case: Changing the case of the letters in a string.

int main()
{
    // String concatenation:
    // 1.Use '+' operator
    string str1, str2;

    cout << "Enter string 1: ";
    cin >> str1;
    cout << "Enter string 2: ";
    cin >> str2;

    string res = str1 + str2;
    cout << "Concatenated string: " << res << endl;

    // 2.strcat() method

    // C++ has a built - in method to concatenate strings.The strcat() method is used
    // to concatenate strings in C++.
    // The strcat() function takes char array as input and then concatenates
    // the input values passed to the function.
    // Syntax: strcat(char *array1, char *array2)

    // Example1
    char charArray1[15] = "Journal";
    char charArray2[15] = "Dev";

    // for (int i = 0; i < 15; i++)
    // {
    //     cout << charArray1[i] << endl;
    // }

    cout << "Concatenated string: ";

    strcat(charArray1, charArray2);
    cout << charArray1 << endl;

    cout << " " << endl;

    // Example2
    // For this to work properly - comment out all previous code inside main
    char charArray3[15], charArray4[15];

    cout << "Enter the first string:\n";
    cin.getline(charArray3, 15);

    cout << "Enter the second string:\n";
    cin.getline(charArray4, 15);

    cout << "Concatenated string: ";

    strcat(charArray3, charArray4);

    cout << charArray3 << endl;

    // 3. append() method

    // The append() method can be used to add strings together.
    // It takes a string as a parameter and adds it to the end of the other string object.

    string a, b;

    a = "Pyt";
    b = "hon";

    a.append(b);

    cout << a << endl;

    // Substring

    string s1 = "Someone";
    string s2 = s1.substr(4, 3);

    cout << s2 << endl;

    // Replace

    string c = "C   Python";
    string d = "Java";
    cout << c << endl;
    cout << c.replace(0, 4, d) << endl;
    cout << c << endl;

    // Upper/lower case

    return 0;
}