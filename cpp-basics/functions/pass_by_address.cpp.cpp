#include <iostream>
using namespace std;

/*
 Demonstrates Call by Address (Pointer):
 The function receives the memory address of the variable.
 Changes through dereferencing affect the original.
*/

void change(int *x);

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Value of x Before Function Call: " << x << endl;

    change(&x); // Address passed

    cout << "Value of x After Function Call: " << x << endl;
    return 0;
}

void change(int *x)
{
    cout << "Address received in change(): " << x << endl;
    *x += 10; // Modify the value at the given address
    cout << "Value of x inside change(): " << *x << endl;
}
