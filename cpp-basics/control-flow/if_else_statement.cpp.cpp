// If-Else Conditional Statement
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any Integer number: ";
    cin >> n;

    if (n > 0)
    {
        cout << n << " is a Positive Integer" << endl;
    }
    else
    {
        cout << n << " is a Negative Integer" << endl;
    }
    return 0;
}