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

    cout << "Duplicate Characters in the String are: " << endl;
    bool found = false;
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 1)
        {
            cout << "Duplicate Characters in the String are: " << char(i) << " = " << freq[i] << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "No Duplicate Characters found." << endl;
    }
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)