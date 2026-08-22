#include <iostream>
#include <string>
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
        if (str[left] != str[right])
        {
            isPalindrome = false;
            break;
        }

        left++;
        right--;
    }

    if (isPalindrome)
        cout << "\nString is a Palindrome." << endl;
    else
        cout << "\nString is Not a Palindrome." << endl;

    return 0;
}

// T(n)= O(n)
// S(n)= O(1)