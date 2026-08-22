#include <iostream>
using namespace std;

/*
 Demonstrates Call by Reference:
 The function receives an alias to the original variable.
 Changes inside the function affect the original.
*/
// Values of X will change before and after a Function call. This is Call or Pass by reference.

void change(int &x);

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Value of x Before Function Call: " << x << endl;

    change(x); // Reference passed

    cout << "Value of x After Function Call: " << x << endl;
    return 0;
}

void change(int &x)
{
    cout << "Address of x in change(): " << &x << endl;
    x += 10;
    cout << "Value of x inside change(): " << x << endl;
}
