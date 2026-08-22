#include <iostream>
using namespace std;

int count_digits(int n)
{
    if (n == 0)
        return 1;

    if (n < 0)
        n = -n;

    if (n == 0)
        return 0;
    return 1 + count_digits(n / 10);
}

int main()
{
    int n;
    cout << "Enter a number to count its Digits: ";
    cin >> n;

    cout << "Number of digits in " << n << " is: " << count_digits(n) << endl;
    return 0;
}