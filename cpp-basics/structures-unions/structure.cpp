#include <iostream>
using namespace std;

struct Student
{
    int id;      // 4 bytes
    float marks; // 4 bytes
    char grade;  // 1 byte (padding will be added here)
};

int main()
{
    Student s1;

    cout << "Enter Student ID: ";
    cin >> s1.id;
    cout << "Enter Marks: ";
    cin >> s1.marks;
    cout << "Enter Grade: ";
    cin >> s1.grade;

    cout << "\n--- Student Details ---\n";
    cout << "Student ID: " << s1.id << endl;
    cout << "Marks: " << s1.marks << endl;
    cout << "Grade: " << s1.grade << endl;

    // Size will usually be a multiple of the largest member's size
    cout << "\nSize of Structure: " << sizeof(s1) << " bytes" << endl;

    return 0;
}