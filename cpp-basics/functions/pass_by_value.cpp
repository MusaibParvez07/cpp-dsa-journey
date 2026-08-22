#include <iostream>
using namespace std;

/*
 Demonstrates Call by Value:
 The function receives a copy of the variable,
 so changes made inside the function do not affect the original.
*/
// Values of X will remain same before and after a Function call. This is Call or Pass by value.

void change(int x);

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Value of x Before Function Call: " << x << endl;

    change(x); // Only a copy is passed

    cout << "Value of x After Function Call: " << x << endl;
    return 0;
}

void change(int x)
{
    cout << "Address of x in change(): " << &x << endl;
    x += 10;
    cout << "Value of x inside change(): " << x << endl;
}
