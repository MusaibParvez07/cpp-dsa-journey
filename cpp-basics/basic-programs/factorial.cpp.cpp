#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    cout << "Enter a Positive Integer: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial does not exist for negative numbers" << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << n << " is: " << fact << endl;
    return 0;
}

// T(n)= O(n)
// S(n)= O(1)