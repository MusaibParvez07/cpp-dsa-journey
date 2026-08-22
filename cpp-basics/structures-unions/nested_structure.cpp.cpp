#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    int id;
    string name;
    Date dob; // Nested structure used here
};

int main()
{
    Student s1;

    s1.id = 101;
    s1.name = "Aman";
    s1.dob.day = 15;
    s1.dob.month = 8;
    s1.dob.year = 2004;

    cout << "Student ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Date of Birth: "
         << s1.dob.day << "-"
         << s1.dob.month << "-"
         << s1.dob.year << endl;

    return 0;
}