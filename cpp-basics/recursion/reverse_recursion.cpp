#include <iostream>
using namespace std;

int reverse(int n, int rev = 0)
{
    if (n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}

int main()
{
    int n;
    cout << "Enter a number to Reverse: ";
    cin >> n;

    bool isNegative = false;
    if (n < 0)
    {
        isNegative = true;
        n = -n;
    }

    int revNum = reverse(n);
    if (isNegative)
        revNum = -revNum;

    cout << "Reverse of the given number is: " << revNum << endl;
    return 0;
}