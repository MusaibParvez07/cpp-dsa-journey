// Operator Overloading is also a Compile Time Polymorphism

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator+(const Complex &c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Function to display complex number
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4), c2(1, 2);

    Complex c3 = c1 + c2; // Uses overloaded + operator

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum: ";
    c3.display();

    return 0;
}
