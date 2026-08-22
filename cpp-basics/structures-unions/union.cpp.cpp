#include <iostream>
using namespace std;

union Student
{
    int id;
    float marks;
    char grade;
};

int main()
{
    Student s1;

    s1.id = 101;
    cout << "Student ID: " << s1.id << endl;

    s1.marks = 92.5;
    cout << "Marks: " << s1.marks << endl;

    s1.grade = 'A';
    cout << "Grade: " << s1.grade << endl;

    cout << "Size of union: " << sizeof(s1) << " bytes" << endl;

    return 0;
}