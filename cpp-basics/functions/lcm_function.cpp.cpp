#include <iostream>
using namespace std;

void find_LCM(int a, int b);

int main()
{
    int a, b;
    cout << "Enter two numbers to find LCM: ";
    cin >> a >> b;

    find_LCM(a, b);
    return 0;
}

void find_LCM(int a, int b)
{
    int num1 = a, num2 = b;
    int hcf = a, temp_b = b;

    while (temp_b != 0)
    {
        int temp = temp_b;
        temp_b = hcf % temp_b;
        hcf = temp;
    }

    int lcm = (num1 * num2) / hcf;

    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;
}