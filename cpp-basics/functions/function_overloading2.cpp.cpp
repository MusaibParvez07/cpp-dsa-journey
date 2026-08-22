#include <iostream>
using namespace std;

// Function Overloading with different argument types
int add(int a, int b);
double add(double a, double b);

int main()
{
    cout << "Integer Add: " << add(10, 2) << endl;   // Calls int version
    cout << "Double Add: " << add(5.3, 6.2) << endl; // Calls double version
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}
