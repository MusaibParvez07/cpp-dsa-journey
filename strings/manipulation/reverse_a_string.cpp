#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String to Reverse: ";
    getline(cin, str);

    str = string(str.rbegin(), str.rend());
    cout << "Reversed String is: " << str << endl;
    return 0;
}
