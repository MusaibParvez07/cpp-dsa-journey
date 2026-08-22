// Multilevel Inheritance

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

// Derived class 1 (from Student)
class Marks : public Student
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

// Derived class 2 (from Marks → Multilevel Inheritance)
class Grade : public Marks
{
public:
    void showResult()
    {
        int total = getTotalMarks();
        float percentage = total / 4.0;

        // Display details
        showStudentDetails();
        showMarks();
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        // Grade calculation
        if (percentage >= 85)
            cout << "Grade: A+" << endl;
        else if (percentage >= 70)
            cout << "Grade: A" << endl;
        else if (percentage >= 55)
            cout << "Grade: B" << endl;
        else if (percentage >= 40)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: FAIL" << endl;
    }
};

int main()
{
    Grade g;

    // Input
    g.getStudentDetails();
    g.getMarks();

    // Output
    g.showResult();

    return 0;
}
