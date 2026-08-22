#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to reverse: ";
    cin >> n;

    bool isNegative = false;
    if (n < 0)
    {
        isNegative = true; // for negative numbers
        n = -n;
    }

    int reversed = 0; // can also use long long to handle hige numbers//
    while (n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if (isNegative)
        reversed = -reversed;

    cout << "Reverse of given number is: " << reversed << endl;
    return 0;
}

// T(n)= O(log n)
// S(n)= O(1)