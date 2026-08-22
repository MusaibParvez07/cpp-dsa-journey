#include <iostream>
using namespace std;

int sum_digits(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sum_digits(n / 10);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
        n = -n; // Make negative numbers positive for digit sum

    cout << "The Sum of digits of " << n << " is: " << sum_digits(n) << endl;
    return 0;
}