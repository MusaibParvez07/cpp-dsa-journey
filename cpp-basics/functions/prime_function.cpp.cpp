#include <iostream>
#include <cmath>
using namespace std;

void prime(int n);

int main()
{
    int n;
    cout << "Enter a number to check: ";
    cin >> n;

    prime(n);
    return 0;
}

void prime(int n)
{
    int count = 0;

    if (n <= 1)
    {
        cout << n << " is not a Prime number" << endl;
        return;
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
}
