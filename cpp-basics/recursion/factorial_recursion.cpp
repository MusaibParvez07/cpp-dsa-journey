#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n < 0)     // Handle negative numbers
        return -1; // Use -1 as an error code

    if (n <= 1) // Base case
        return 1;
    return n * factorial(n - 1); // Recursive call
}

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int result = factorial(n);
    if (result == -1)
        cout << "Factorial does not exist for negative numbers" << endl;
    else
        cout << "Factorial of " << n << " is: " << result << endl;

    return 0;
}