#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str, lowerstr = "", upperstr = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str)
    {
        lowerstr += tolower(ch);
        upperstr += toupper(ch);
    }

    cout << "Lowercase: " << lowerstr << endl;
    cout << "Uppercase: " << upperstr << endl;
    return 0;
}

// T(n) & S(n)= O(n).