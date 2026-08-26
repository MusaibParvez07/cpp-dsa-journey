#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' ||
           ch == 'i' || ch == 'o' ||
           ch == 'u';
}

int main()
{
    string str;
    cout << "Enter the String: ";
    getline(cin, str);

    int k;
    cout << "Enter the window size (k): ";
    cin >> k;

    if (k > str.size() || k <= 0)
    {
        cout << "Invalid window size" << endl;
        return 0;
    }

    int vowelCount = 0;
    int maxVowels = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (isVowel(str[i]))
            vowelCount++;

        if (i >= k - 1)
        {
            maxVowels = max(maxVowels, vowelCount);

            if (isVowel(str[i - k + 1]))
                vowelCount--;
        }
    }
    cout << "Maximum Vowels: " << maxVowels << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)

// T(n)= O(n)
// S(n)= O(1)
