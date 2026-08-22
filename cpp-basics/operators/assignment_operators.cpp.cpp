// Assignment Operators
#include <iostream>
using namespace std;

int main()
{
    int a = 7, b = 5;
    cout << "a at start is: " << a << endl;
    cout << "a+=b is: " << (a += b) << endl;
    cout << "a-=b is: " << (a -= b) << endl;
    cout << "a*=b is: " << (a *= b) << endl;
    cout << "a/=b is: " << (a /= b) << endl;
    cout << "a%b is : " << (a %= b) << endl;
    cout << "a at end is: " << a << endl;
    return 0;
}