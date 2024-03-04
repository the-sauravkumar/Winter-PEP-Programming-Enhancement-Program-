#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

// Program that accepts data of two students and returns the name of the student with higher marks
struct student {
  int roll;
  string name;
  int phoneNumber;
  string dateOfBirth;
  int marks;
  
};
int main() {
    student student1;
    student student2;

  
    cout << "Roll: ";
    cin >> student1.roll;

    cout << "Name: ";
    cin >> student1.name;

    cout << "Phone Number: ";
    cin >> student1.phoneNumber;

    cout << "Date of Birth: ";
    cin >> student1.dateOfBirth;

    cout << "Marks: ";
    cin >> student1.marks;

  
    cout << "\nEnter details for student 2:\n";
    cout << "Roll: ";
    cin >> student2.roll;

    cout << "Name: ";
    cin >> student2.name;

    cout << "Phone Number: ";
    cin >> student2.phoneNumber;

    cout << "Date of Birth: ";
    cin >> student2.dateOfBirth;

    cout << "Marks: ";
    cin >> student2.marks;

    if (student1.marks > student2.marks) {
        cout << "Student 1 (" << student1.name << ") has higher marks.\n";
    } else if (student2.marks > student1.marks) {
        cout << "Student 2 (" << student2.name << ") has higher marks.\n";
    } else {
        cout << "Both students have the same marks.\n";
    }
}