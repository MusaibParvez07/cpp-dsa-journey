#include <iostream>
using namespace std;

int main()
{
    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << __SIZEOF_LONG_DOUBLE__ << endl;
    cout << __SIZEOF_POINTER__ << endl;
    return 0;
}