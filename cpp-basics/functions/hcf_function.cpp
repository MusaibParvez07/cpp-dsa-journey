#include <iostream>
using namespace std;

void find_HCF(int a, int b);

int main()
{
    int a, b;
    cout << "Enter two numbers to find HCF: ";
    cin >> a >> b;

    find_HCF(a, b);
    return 0;
}

void find_HCF(int a, int b)
{
    int num1 = a, num2 = b; // store original values for printing later

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "HCF of " << num1 << " and " << num2 << " is: " << a << endl;
}