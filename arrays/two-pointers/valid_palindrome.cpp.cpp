#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    getline(cin, str);

    int left = 0, right = str.length() - 1;
    bool isPalindrome = true;

    while (left < right)
    {
        // Skip non-alphanumeric characters
        if (!isalnum(str[left]))
        {
            left++;
        }
        else if (!isalnum(str[right]))
        {
            right--;
        }
        else
        {

            if (tolower(str[left]) != tolower(str[right]))
            {
                isPalindrome = false;
                break;
            }

            left++;
            right--;
        }
    }

    if (isPalindrome)
    {
        cout << "String is a Palindrome." << endl;
    }
    else
    {
        cout << "String is Not a Palindrome." << endl;
    }
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)