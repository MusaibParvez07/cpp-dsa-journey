#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    int maxLength = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = 0; j < s2.length(); j++)
        {

            int length = 0;

            while (i + length < s1.length() &&
                   j + length < s2.length() &&
                   s1[i + length] == s2[j + length])
            {

                length++;
            }

            if (length > maxLength)
            {
                maxLength = length;
            }
        }
    }

    cout << "Length of Longest Common Substring: " << maxLength;
    return 0;
}

// T(n)= O(n*m*min(n,m))
// S(n)= O(1)