#include <iostream>
using namespace std;

class Demo
{
public:
    int publicVar; // Accessible everywhere

private:
    int privateVar; // Accessible only inside the class

protected:
    int protectedVar; // Accessible inside class and derived classes

public:
    // Constructor
    Demo()
    {
        publicVar = 1;
        privateVar = 2;
        protectedVar = 3;
    }

    // Public function to show privateVar (since direct access is not possible)
    void showPrivate()
    {
        cout << "Private Variable: " << privateVar << endl;
    }
};

// Derived class
class Child : public Demo
{
public:
    void showProtected()
    {
        cout << "Protected Variable: " << protectedVar << endl;
    }
};

int main()
{
    Demo d;
    Child c;

    cout << "Public Variable: " << d.publicVar << endl; // Direct access

    d.showPrivate(); // Access through public function

    c.showProtected(); // Accessible via derived class

    return 0;
}
