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

    cout << "Character Frequencies:" << endl;
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            cout << char(i) << " = " << freq[i] << endl;
        }
    }
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)