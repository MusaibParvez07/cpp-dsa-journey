// If Conditional Statement
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any Integer number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << n << " is an Even number" << endl;
    if (n % 2 != 0)
        cout << n << " is an Odd number" << endl;
    return 0;
}