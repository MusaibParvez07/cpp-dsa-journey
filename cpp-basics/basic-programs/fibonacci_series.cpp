#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms of the Fibonacci series: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Number of terms must be positive." << endl;
        return 0;
    }

    cout << "Fibonacci Series: ";
    int t1 = 0, t2 = 1, next;

    for (int i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)