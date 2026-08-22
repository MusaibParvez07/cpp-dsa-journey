#include <iostream>
using namespace std;

int count_Digits(int n);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of digits in " << n << " is: " << count_Digits(n) << endl;
    return 0;
}

int count_Digits(int n)
{
    int count = 0;

    if (n == 0)
        return 1;

    if (n < 0)
        n = -n;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }

    return count;
}