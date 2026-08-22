#include <iostream>
using namespace std;

int calculateRectangleArea(const int length, const int width); // Function Parameters Passed in Declaration

int main()
{
    int length = 20, width = 5;
    int result = calculateRectangleArea(length, width); // Function Arguments Passed when Calling the Function
    cout << "Area of the rectangle: " << result << endl;
    return 0;
}

int calculateRectangleArea(const int length, const int width)
{ // Definition
    return length * width;
}
