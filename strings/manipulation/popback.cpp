#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (!str.empty())
    {
        str.pop_back();
        cout << "After pop_back: " << str << endl;
    }
    else
    {
        cout << "String is already empty!" << endl;
    }
    return 0;
}
