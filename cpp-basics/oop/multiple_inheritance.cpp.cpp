// Multiple Inheritance

#include <iostream>
using namespace std;

// Base class 1
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

// Base class 2
class Marks
{
protected:
    int Phy, Che, Math, Eng;

public:
    void getMarks()
    {
        cout << "Enter marks in Physics, Chemistry, Math, English: ";
        cin >> Phy >> Che >> Math >> Eng;
    }

    void showMarks()
    {
        cout << "Marks: " << endl;
        cout << "Physics: " << Phy << ", Chemistry: " << Che
             << ", Math: " << Math << ", English: " << Eng << endl;
    }

    int getTotalMarks()
    {
        return Phy + Che + Math + Eng;
    }
};

// Derived class (Multiple Inheritance)
class Result : public Student, public Marks
{
private:
    int sports;

public:
    void getSportsMarks()
    {
        cout << "Enter Sports marks: ";
        cin >> sports;
    }

    void showResult()
    {
        int total = getTotalMarks() + sports;
        float percentage = total / 5.0;

        // Display everything
        showStudentDetails();
        showMarks();
        cout << "Sports Marks: " << sports << endl;
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
    Result r;

    // Input
    r.getStudentDetails();
    r.getMarks();
    r.getSportsMarks();

    // Output
    r.showResult();

    return 0;
}
