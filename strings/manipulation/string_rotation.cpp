#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter First String: ";
    cin >> str1;

    cout << "Enter Second String: ";
    cin >> str2;

    if (str1.length() == str2.length() && (str1 + str1).find(str2) != string::npos)
    {
        cout << "Strings are Rotations." << endl;
    }
    else
    {
        cout << "Strings are Not Rotations." << endl;
    }
    return 0;
}

// T(n)= O(n2)
// S(n)= O(n)