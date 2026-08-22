#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    float average;
    cout << "Enter a Limit: ";
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
    average = (float)sum / n;

    cout << "Average of First " << n << " Natural numbers is: " << average << endl;
    return 0;
}
