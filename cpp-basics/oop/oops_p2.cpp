#include <iostream>
using namespace std;

// Define a Class
class Car
{
private:
    // Data Members
    string brand;
    string model;
    int year;

public:
    // Constructor to initialize data
    Car(string b, string m, int y)
    {
        brand = b;
        model = m;
        year = y;
    }

    // Function to display data (getter style)
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    // Create Objects using Constructor
    Car car1("Toyota", "Fortuner", 2022);
    Car car2("Tesla", "Model S", 2024);

    // Display details
    cout << "Car 1 Details:" << endl;
    car1.display();

    cout << "\nCar 2 Details:" << endl;
    car2.display();

    return 0;
}
