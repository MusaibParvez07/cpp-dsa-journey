#include <iostream>
using namespace std;

int main()
{
     int num1, num2, temp;
     cout << "Enter First and Second number: ";
     cin >> num1 >> num2;
     cout << "Before Swapping:" << endl;
     cout << "Value of num1:" << num1 << "\n"
          << "Value of num2:" << num2 << endl;
     cout << "\n"
          << endl;

     temp = num1;
     num1 = num2;
     num2 = temp;
     cout << "After Swapping:" << endl;
     cout << "Value of num1:" << num1 << "\n"
          << "Value of num2:" << num2 << endl;
     return 0;
}