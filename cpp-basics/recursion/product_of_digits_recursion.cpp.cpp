#include <iostream>
using namespace std;

int product_digits(int n)
{
    if (n == 0)
        return 0; // product of digits in 0 is 0

    int lastDigit = n % 10;
    if (lastDigit < 0)
        lastDigit = -lastDigit; // handle negative digits

    int remaining = n / 10;
    if (remaining == 0)
        return lastDigit;

    return lastDigit * product_digits(remaining);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
        n = -n; // make negative numbers positive

    cout << "The Product of digits of " << n << " is: " << product_digits(n) << endl;
    return 0;
}