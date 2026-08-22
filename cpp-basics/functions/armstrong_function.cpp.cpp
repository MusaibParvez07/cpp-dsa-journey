#include <iostream>
#include <cmath>
using namespace std;

void armstrong(int n);

int main()
{
    int n;
    cout << "Enter a number to check: ";
    cin >> n;

    armstrong(n);
    return 0;
}

void armstrong(int n)
{
    int sum = 0, digits = 0, temp;

    if (n < 0)
    {
        cout << "Negative numbers cannot be Armstrong numbers" << endl;
        return;
    }

    temp = n;

    while (temp > 0)
    {
        temp = temp / 10;
        digits++;
    }

    temp = n;

    while (temp > 0)
    {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp = temp / 10;
    }

    if (sum == n)
        cout << n << " is an Armstrong number" << endl;
    else
        cout << n << " is not an Armstrong number" << endl;
}