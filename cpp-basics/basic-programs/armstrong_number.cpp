#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to check: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Negative numbers cannot be Armstrong numbers" << endl;
        return 0;
    }

    int sum = 0, digits = 0;
    int temp = n;

    while (temp > 0)
    {
        temp /= 10;
        digits++;
    }

    temp = n;

    while (temp > 0)
    {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == n)
        cout << n << " is an Armstrong number" << endl;
    else
        cout << n << " is not an Armstrong number" << endl;
    return 0;
}

// T(n)=O(log n)
// S(n)=O(1)
