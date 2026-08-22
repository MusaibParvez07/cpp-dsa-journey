#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);

    cout << "\nLength of String: " << str.length() << endl; // can also use str.size().
    return 0;
}