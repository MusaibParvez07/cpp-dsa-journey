// Hierarchial Inheritance

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

// Derived class 1 (Academic Marks)
class Marks : public Student
{
private:
    int Phy, Che, Math, Eng;

public:
    void getMarks()
    {
        cout << "Enter marks in Physics, Chemistry, Math, English: ";
        cin >> Phy >> Che >> Math >> Eng;
    }

    void showMarks()
    {
        int total = Phy + Che + Math + Eng;
        float percentage = total / 4.0;

        showStudentDetails();
        cout << "Academic Marks:" << endl;
        cout << "Physics: " << Phy << ", Chemistry: " << Che
             << ", Math: " << Math << ", English: " << Eng << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Derived class 2 (Sports Marks)
class Sports : public Student
{
private:
    int score;

public:
    void getSportsScore()
    {
        cout << "Enter Sports Score (out of 100): ";
        cin >> score;
    }

    void showSportsScore()
    {
        showStudentDetails();
        cout << "Sports Score: " << score << "/100" << endl;

        if (score >= 75)
            cout << "Sports Grade: Excellent" << endl;
        else if (score >= 50)
            cout << "Sports Grade: Good" << endl;
        else
            cout << "Sports Grade: Needs Improvement" << endl;
    }
};

int main()
{
    cout << "\n--- Academic Performance ---" << endl;
    Marks m;
    m.getStudentDetails();
    m.getMarks();
    m.showMarks();

    cout << "\n--- Sports Performance ---" << endl;
    Sports s;
    s.getStudentDetails();
    s.getSportsScore();
    s.showSportsScore();

    return 0;
}
