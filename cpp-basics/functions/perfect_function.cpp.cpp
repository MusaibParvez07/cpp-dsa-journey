#include <iostream>
using namespace std;

void perfect(int n);

int main()
{
    int n;
    cout << "Enter a number to check: ";
    cin >> n;

    perfect(n);
    return 0;
}

void perfect(int n)
{
    int sum = 0;

    if (n <= 0)
    {
        cout << "Perfect numbers are positive integers only" << endl;
        return;
    }

    int i = 1;
    while (i <= n / 2)
    {
        if (n % i == 0)
            sum += i;
        i++;
    }

    if (sum == n)
        cout << n << " is a Perfect number" << endl;
    else
        cout << n << " is not a Perfect number" << endl;
}