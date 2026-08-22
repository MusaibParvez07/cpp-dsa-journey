#include <iostream>
using namespace std;

// Overloading with different number of parameters
int add(int a, int b);
int add(int a, int b, int c);

int main()
{
    cout << "Add two numbers: " << add(10, 20) << endl;      // Calls 2-parameter version
    cout << "Add three numbers: " << add(5, 15, 25) << endl; // Calls 3-parameter version
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}
