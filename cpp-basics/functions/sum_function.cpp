#include <iostream>
using namespace std;

int add(const int a, const int b); // Function Declaration

int main()
{
    int a, b;
    cout << "Enter two numbers to add: ";
    cin >> a >> b;

    int result = add(a, b); // Function Call
    cout << "Sum of " << a << " and " << b << " is: " << result << endl;

    return 0;
}

int add(const int a, const int b) // Function Definition
{
    return a + b;
}
