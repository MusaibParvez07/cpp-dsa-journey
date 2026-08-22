// Function Overloading is a Compile Time Polymorphism

#include <iostream>
using namespace std;

class AreaCalculator
{
public:
    // Area of a square
    int area(int side)
    {
        return side * side;
    }

    // Area of a rectangle
    int area(int length, int width)
    {
        return length * width;
    }

    // Area of a circle
    double area(double radius)
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    AreaCalculator calc;

    cout << "Area of Square (side=5): " << calc.area(5) << endl;      // calls int area(int)
    cout << "Area of Rectangle (10x4): " << calc.area(10, 4) << endl; // calls int area(int,int)
    cout << "Area of Circle (radius=3): " << calc.area(3.0) << endl;  // calls double area(double)

    return 0;
}
