#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    cin >> str;

    string result;
    int i = 0;
    while (i < str.length())
    {
        char ch = str[i];

        int count = 0;
        while (i < str.length() && str[i] == ch)
        {
            count++;
            i++;
        }
        result += ch;
        result += to_string(count);
    }
    cout << "Compressed String: " << result << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(n)