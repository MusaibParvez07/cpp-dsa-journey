#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' ||
           ch == 'i' || ch == 'o' ||
           ch == 'u';
}

int main()
{
    string str = "abciiidef";

    int k = 3;
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