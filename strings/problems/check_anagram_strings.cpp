#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter First String: ";
    getline(cin, str1);
    cout << "Enter Second String: ";
    getline(cin, str2);

    if (str1.length() != str2.length())
    {
        cout << "Strings are Not Anagrams." << endl;
        return 0;
    }

    int freq[256] = {0};

    for (char ch : str1)
    {
        freq[(unsigned char)ch]++;
    }

    for (char ch : str2)
    {
        freq[(unsigned char)ch]--;
    }

    bool isAnagram = true;
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
        cout << "Strings are Anagrams." << endl;
    else
        cout << "Strings are Not Anagrams." << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)