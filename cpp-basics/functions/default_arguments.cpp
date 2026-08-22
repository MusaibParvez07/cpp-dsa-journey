#include <iostream>
using namespace std;

// b and c have default values
int multi(int a, int b = 1, int c = 1);
int main()
{
    cout << "Multiplication Result: " << multi(5) << endl;       // Uses default b=1, c=1 → 5*1*1
    cout << "Multiplication Result: " << multi(5, 2) << endl;    // Uses default c=1 → 5*2
    cout << "Multiplication Result: " << multi(5, 2, 3) << endl; // No defaults used → 5*2*3
    return 0;
}

int multi(int a, int b, int c)
{
    return a * b * c;
}
