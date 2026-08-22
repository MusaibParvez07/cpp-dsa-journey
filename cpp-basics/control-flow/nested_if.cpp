// Nested If Conditional Statement
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any Integer number: ";
    cin >> n;

    if (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << n << " is a Positive Even number" << endl;
        }
        else
        {
            cout << n << " is a Positive Odd number" << endl;
        }
    }
    else
        cout << n << " is a Negative number" << endl;
    return 0;
}