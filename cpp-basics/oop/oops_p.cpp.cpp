#include <iostream>
using namespace std;

// Define a Class
class Car
{
public:
    // Data Members
    string brand;
    string model;
    int year;
};

int main()
{
    // Create Object of class Car
    Car car1, car2;

    // Directly assign values (since members are public)
    car1.brand = "Toyota";
    car1.model = "Fortuner";
    car1.year = 2022;

    car2.brand = "Tesla";
    car2.model = "Model S";
    car2.year = 2024;

    // Display data
    cout << "Car 1 Details:" << endl;
    cout << "Brand: " << car1.brand << endl;
    cout << "Model: " << car1.model << endl;
    cout << "Year: " << car1.year << endl;

    cout << "\nCar 2 Details:" << endl;
    cout << "Brand: " << car2.brand << endl;
    cout << "Model: " << car2.model << endl;
    cout << "Year: " << car2.year << endl;

    return 0;
}