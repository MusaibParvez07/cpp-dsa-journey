#include <iostream>
using namespace std;

void palindrome(int n);

int main()
{
    int n;
    cout << "Enter a number to Check: ";
    cin >> n;

    palindrome(n);
    return 0;
}

void palindrome(int n)
{
    int reverse = 0, temp;
    temp = n;

    if (n < 0)
    {
        cout << "Negative numbers cannot be Palindromes" << endl;
        return;
    }

    while (temp > 0)
    {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if (reverse == n)
        cout << n << " is a Palindrome number" << endl;
    else
        cout << n << " is not a Palindrome number" << endl;
}