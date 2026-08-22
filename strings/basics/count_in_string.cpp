#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);

    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    for (char ch : str)
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else if (isspace(ch))
        {
            spaces++;
        }
    }

    cout << "Count in String:" << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)