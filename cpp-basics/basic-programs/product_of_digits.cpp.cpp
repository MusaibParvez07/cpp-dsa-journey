#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
        n = -n;

    if (n == 0)
    {
        cout << "The Product of digits of the given number is: 0" << endl;
        return 0;
    }

    int product = 1, digit = 0;
    while (n > 0)
    {
        int digit = n % 10;
        product *= digit;
        n /= 10;
    }
    cout << "The Product of digits of the given number is: " << product << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)