#include <iostream>
using namespace std;

inline int square(int x)
{
    return x * x;
}

inline int cube(int x)
{
    return x * x * x;
}

inline int power(int base, int exp)
{
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int main()
{
    int num, exp;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Square of " << num << " is: " << square(num) << endl;
    cout << "Cube of " << num << " is: " << cube(num) << endl;

    cout << "Enter exponent for power: ";
    cin >> exp;
    cout << num << "^" << exp << " = " << power(num, exp) << endl;

    return 0;
}
