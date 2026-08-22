// Arithmetic Operators
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5, add, sub, mult, divi, mod;
    add = a + b;
    sub = a - b;
    mult = a * b;
    divi = a / b;
    mod = a % b;
    cout << "Sum of two no's is: " << add;
    cout << "\nDifference of two no's is: " << sub;
    cout << "\nProduct of two no's is: " << mult;
    cout << "\nQuotient of two no's is: " << divi;
    cout << "\nRemainder of two no's is: " << mod;
    return 0;
}