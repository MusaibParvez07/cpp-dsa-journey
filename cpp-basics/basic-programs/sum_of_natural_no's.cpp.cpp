#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the Limit: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Limit must be a positive integer" << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum of First " << n << " Natural numbers is: " << sum << endl;
    return 0;
}