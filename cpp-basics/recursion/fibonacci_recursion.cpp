#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter the no of terms of the series: ";
    cin >> n;
    cout << "Fibonacci Series is:";
    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}