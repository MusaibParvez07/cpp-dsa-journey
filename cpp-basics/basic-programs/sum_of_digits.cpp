#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
        n = -n;

    int sum = 0, digit = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout << "The Sum of digits of the given number is: " << sum << endl;
    return 0;
}

// T(n)= O(log n)
// S(n)= O(1)