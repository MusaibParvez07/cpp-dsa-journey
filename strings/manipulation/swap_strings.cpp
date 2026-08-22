#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    cout << "Before swap:\n";
    cout << "First String: " << str1 << endl;
    cout << "Second String: " << str2 << endl;

    swap(str1, str2);

    cout << "After swap:\n";
    cout << "First String: " << str1 << endl;
    cout << "Second String: " << str2 << endl;
    return 0;
}
