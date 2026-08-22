#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter a number to check: ";
    cin >> n;

    if (n <= 1)
    {
        cout << n << " is not a Prime number" << endl;
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
        cout << n << " is a Prime number" << endl;
    else
        cout << n << " is not a Prime number" << endl;
    return 0;
}

// T(n)= O(√n)