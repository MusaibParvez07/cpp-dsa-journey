#include <iostream>
using namespace std;

int main()
{
    int num = 10;    // Declare and initialize a normal variable
    int *ptr = &num; // Declare a pointer and store the address of num

    // Accessing value using pointer
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer ptr holds address: " << ptr << endl;
    cout << "Value at address stored in ptr: " << *ptr << endl;

    // Modifying value using pointer
    *ptr = 20;

    cout << "\nAfter modifying value through pointer:\n";
    cout << "Value of num: " << num << endl;
    cout << "Value at address stored in ptr: " << *ptr << endl;
    return 0;
}