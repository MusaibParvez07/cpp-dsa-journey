#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to Check: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Negative numbers cannot be Palindromes" << endl;
        return 0;
    }

    int reversed = 0;
    int temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    if (reversed == n)
        cout << n << " is a Palindrome number" << endl;
    else
        cout << n << " is not a Palindrome number" << endl;
    return 0;
}

// T(n)= O(log n)
// S(n)= O(1)