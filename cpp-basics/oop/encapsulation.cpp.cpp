#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    // Setter for length
    void setLength(int l)
    {
        if (l > 0)
            length = l;
        else
            length = 0;
    }

    // Setter for width
    void setWidth(int w)
    {
        if (w > 0)
            width = w;
        else
            width = 0;
    }

    // Getter for length
    int getLength()
    {
        return length;
    }

    // Getter for width
    int getWidth()
    {
        return width;
    }

    int getArea()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r1;

    // Set values through setters
    r1.setLength(10);
    r1.setWidth(5);

    // Get values through getters
    cout << "Length: " << r1.getLength() << endl;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Area of Rectangle: " << r1.getArea() << endl;

    return 0;
}
