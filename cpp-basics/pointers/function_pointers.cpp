#include <iostream>
using namespace std;

// Function to multiply two integers
int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    // Declare a pointer to a function taking two int arguments and returning int
    int (*func)(int, int);

    // Assign the address of multiply to the function pointer
    func = multiply;

    // Call the function using the pointer
    int prod = func(15, 2);
    cout << "The value of the product is: " << prod << endl;

    // Another example call
    cout << "Product of 7 and 6 is: " << func(7, 6) << endl;

    return 0;
}