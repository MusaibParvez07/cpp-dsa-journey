// Logical Operator
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 8;
    cout << ((a > 8) && (b <= 8)) << endl;    // Here 1 means True
    cout << ((a == 10) && (b == 10)) << endl; // Here 0 means False
    cout << ((a < 10) && (b > 10)) << endl;   // Here 0 also means False

    cout << ((a > 8) && (b <= 8)) << endl;    // Here 1 means True
    cout << ((a == 10) && (b == 10)) << endl; // Here 1 also mean True
    cout << ((a < 10) && (b > 10)) << endl;   // Here 0 means False
    cout << !(a == 10) << endl;               // Here 0 means False.True value is false and False value is true.
    cout << !(b > 10) << endl;                // Here 1 means True.False value is true and True value is false.
    return 0;
}