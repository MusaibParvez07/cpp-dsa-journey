#include <iostream>
using namespace std;

int check_palindrome(int n, int rev = 0)
{
    if (n == 0)
        return rev;
    return check_palindrome(n / 10, rev * 10 + n % 10);
}

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

    if (n == check_palindrome(n))
        cout << n << " is a Palindrome number" << endl;
    else
        cout << n << " is not a Palindrome number" << endl;

    return 0;
}