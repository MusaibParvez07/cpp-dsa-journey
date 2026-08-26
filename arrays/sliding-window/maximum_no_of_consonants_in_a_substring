#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

bool isConsonant(char ch)
{
    ch = tolower(ch);
    return isalpha(ch) && (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u');
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
        cout << "Invalid Window size" << endl;
        return 0;
    }

    int consonantCount = 0;
    int maxConsonants = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (isConsonant(str[i]))
            consonantCount++;

        if (i >= k - 1)
        {
            maxConsonants = max(maxConsonants, consonantCount);

            if (isConsonant(str[i - k + 1]))
                consonantCount--;
        }
    }
    cout << "Maximum Consonants: " << maxConsonants << endl;
    return 0;
}

// T(n) = O(n)
// S(n) = O(1)
