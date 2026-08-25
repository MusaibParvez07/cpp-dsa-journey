#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "abcabcbb";

    int left = 0;
    int maxLength = 0;
    int freq[256] = {0};

    for (int right = 0; right < str.length(); right++)
    {
        freq[(unsigned char)str[right]]++;

        while (freq[(unsigned char)str[right]] > 1)
        {
            freq[(unsigned char)str[left]]--;
            left++;
        }

        maxLength = max(maxLength, right - left + 1);
    }
    cout << "Longest Length: " << maxLength << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)