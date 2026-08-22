// Single Inheritance

#include <iostream>
using namespace std;

// Base class
class Student
{
protected:
    string name;
    int roll_no;

public:
    void getStudentDetails()
    {
        cout << "Enter Student Name and Roll number: ";
        cin >> name >> roll_no;
    }

    void showStudentDetails()
    {
        cout << "\nStudent Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};

// Derived class (Single Inheritance)
class Marks : public Student
{
private:
    int Phy, Che, Math, Eng;

public:
    void getMarks()
    {
        cout << "Enter Subject-wise marks in 4 subjects: ";
        cin >> Phy >> Che >> Math >> Eng;
    }
    void showResult()
    {
        int total = Phy + Che + Math + Eng;
        float percentage = total / 4.0;

        showStudentDetails(); // call base class function
        cout << "Marks: " << endl;
        cout << "Physics: " << Phy << ", " << "Chemistry: " << Che << ", " << "Math: " << Math << ", " << "English: " << Eng << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 45)
            cout << "Result: PASS" << endl;
        else
            cout << "Result: FAIL" << endl;
    }
};

int main()
{
    Marks m;

    // Input
    m.getStudentDetails();
    m.getMarks();

    // Output
    m.showResult();

    return 0;
}