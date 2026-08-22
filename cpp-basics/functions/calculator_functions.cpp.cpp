#include <iostream>
using namespace std;

void calculator(int a, int b, int choice);

int main()
{
    int a, b, choice;
    cout << "Enter the two numbers: ";
    cin >> a >> b;

    cout << "Press\n 1 for Addition\n 2 for Subtraction\n 3 for Multiplication\n 4 for Division\n 5 for Modulus" << endl;
    cout << "Enter your Choice: ";
    cin >> choice;

    calculator(a, b, choice);
    return 0;
}

void calculator(int a, int b, int choice)
{
    switch (choice)
    {
    case 1:
        cout << "Sum of " << a << " and " << b << " is: " << a + b << endl;
        break;
    case 2:
        cout << "Difference of " << a << " and " << b << " is: " << a - b << endl;
        break;
    case 3:
        cout << "Product of " << a << " and " << b << " is: " << a * b << endl;
        break;
    case 4:
        if (b != 0)
            cout << "Quotient of " << a << " and " << b << " is: " << a / b << endl;
        else
            cout << "Division not possible (dividing by zero)" << endl;
        break;
    case 5:
        if (b != 0)
            cout << "Remainder of " << a << " and " << b << " is: " << a % b << endl;
        else
            cout << "Modulus not possible (dividing by zero)" << endl;
        break;
    default:
        cout << "Invalid Choice" << endl;
    }
}