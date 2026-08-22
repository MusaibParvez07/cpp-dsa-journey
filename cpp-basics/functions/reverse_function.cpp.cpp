#include <iostream>
using namespace std;

void reverse(int n);

int main()
{
    int n;
    cout << "Enter a number to Reverse: ";
    cin >> n;

    reverse(n);
    return 0;
}

void reverse(int n)
{
    int reverse = 0;
    bool isNegative = false;

    if (n < 0)
    {
        isNegative = true;
        n = -n; // Make positive for reversal
    }

    while (n > 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (isNegative)
        reverse = -reverse;

    cout << "Reverse of Given number is: " << reverse << endl;
}