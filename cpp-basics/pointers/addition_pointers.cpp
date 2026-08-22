#include <iostream>
using namespace std;

int main()
{
    int a, b, *p, *q, sum;
    cout << "Enter two numbers to add: ";
    cin >> a >> b;

    p = &a;
    q = &b;
    sum = *p + *q;
    cout << "Sum of two numbers using pointers is: " << sum << endl;
    return 0;
}