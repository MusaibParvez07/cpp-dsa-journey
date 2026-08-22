// If Else-If Else Conditional Statement
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Enter First number: ";
    cin >> n1;
    cout << "Enter Second number: ";
    cin >> n2;
    cout << "Enter Third number: ";
    cin >> n3;

    if ((n1 >= n2) && (n1 >= n3))
    {
        cout << n1 << " is the largest number" << endl;
    }
    else if ((n2 > n1) && (n2 >= n3))
    {
        cout << n2 << " is the largest number" << endl;
    }
    else
        cout << n3 << " is the largest number" << endl;
    return 0;
}