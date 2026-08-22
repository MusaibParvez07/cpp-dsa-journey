#include <iostream>
using namespace std;

int main()
{
    int n, limit;
    cout << "Enter a number to print its table: ";
    cin >> n;
    cout << "Enter a limit: ";
    cin >> limit;

    cout << "Multiplication table of " << n << " is:";
    cout << "\n";

    for (int i = 1; i <= limit; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}