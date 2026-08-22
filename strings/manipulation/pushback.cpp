#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character to push at the end: ";
    cin >> ch;

    str.push_back(ch);
    cout << "After push_back: " << str << endl;
    return 0;
}
