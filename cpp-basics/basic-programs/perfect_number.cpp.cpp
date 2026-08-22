#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to check: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Perfect numbers are positive integers only" << endl;
        return 0;
    }

    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        cout << n << " is a Perfect number" << endl;
    else
        cout << n << " is not a Perfect number" << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)
