#include <iostream>
using namespace std;

struct Point
{
    int x, y;

    // Member function to return sum
    int sum()
    {
        return x + y;
    }
};

int main()
{
    Point p1 = {75, 25};                            // Initializing members
    cout << "Sum of x and y: " << p1.sum() << endl; // Call member function
    return 0;
}