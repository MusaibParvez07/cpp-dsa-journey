#include <iostream>
using namespace std;

int main()
{
    int x, y, *m, *n, temp;
    cout << "Enter First and Second number: ";
    cin >> x >> y;
    cout << "Before Swapping:" << endl;
    cout << "Value of first number: " << x << "\n"
         << "Value of second number: " << y << endl;
    cout << "\n";

    m = &x;
    n = &y;

    temp = *m;
    *m = *n;
    *n = temp;
    cout << "After Swapping:" << endl;
    cout << "Value of first number: " << x << "\n";
    cout << "Value of second number: " << y << endl;
    return 0;
}