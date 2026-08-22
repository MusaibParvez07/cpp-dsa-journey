#include <iostream>
#include <cmath>
using namespace std;

int binarytodecimal(int binary, int power = 0)
{
    if (binary == 0)
        return 0;

    int lastDigit = binary % 10;
    if (lastDigit != 0 && lastDigit != 1)
    {
        cout << "Invalid binary number!" << endl;
        return -1; // error code
    }

    return (lastDigit * pow(2, power)) + binarytodecimal(binary / 10, power + 1);
}

int main()
{
    int num;
    cout << "Enter a binary number: ";
    cin >> num;

    bool isNegative = false;
    if (num < 0)
    {
        isNegative = true;
        num = -num;
    }

    int decimal = binarytodecimal(num);
    if (decimal != -1)
    {
        if (isNegative)
            decimal = -decimal;
        cout << "Decimal equivalent: " << decimal << endl;
    }

    return 0;
}