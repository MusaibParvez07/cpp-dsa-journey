#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);

    int freq[256] = {0};
    for (char ch : str)
    {
        freq[(unsigned char)ch]++;
    }

    bool found = false;
    for (char ch : str)
    {
        if (freq[(unsigned char)ch] == 1)
        {
            cout << "First Non-Repeating Character: " << ch << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "No non-repeating character found." << endl;
    }
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)