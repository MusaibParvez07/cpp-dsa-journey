#include <iostream>
using namespace std;

int main()
{
    int a, b, choice;
    cout << "Enter your two numbers: ";
    cin >> a >> b;
    cout << "Enter\n 1 for Addition\n 2 for Subtraction\n 3 for Multiplication\n 4 for Division\n 5 for Modulus";
    cout << "Enter your Choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Sum of two numbers is: " << a + b << endl;
        break;
    case 2:
        cout << "Difference of two numbers is: " << a - b << endl;
        break;
    case 3:
        cout << "Product of two numbers is: " << a * b << endl;
        break;
    case 4:
        cout << "Quotient of two numbers is: " << a / b << endl;
        break;
    case 5:
        cout << "Remainder of two numbers is: " << a % b << endl;
        break;
    default:
        cout << "Invalid Choice" << endl;
    }
    return 0;
}