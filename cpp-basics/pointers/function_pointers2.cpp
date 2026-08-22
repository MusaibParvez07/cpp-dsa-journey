#include <iostream>
using namespace std;

// Function to update value using pointer
void updateValue(int *ptr)
{
    *ptr = *ptr + 10; // Add 10 to the value pointed by ptr
}

int main()
{
    int num = 20;

    cout << "Before function call, num = " << num << endl;

    updateValue(&num); // Call function and pass address of num

    cout << "After function call, num = " << num << endl;
    return 0;
}