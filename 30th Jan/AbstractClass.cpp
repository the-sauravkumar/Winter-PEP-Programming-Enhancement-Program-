#include <iostream>
#include <string>

using std::cout;
using std::string;

class Student {
protected:
    string name;

public:
    Student(const string& studentName) : name(studentName) {}

    virtual void displayInfo() const {
        cout << "Student Name: " << name << "\n";
    }
};

class CppStudent : public Student {
private:
    int cppLevel;

public:
    CppStudent(const string& studentName, int level) : Student(studentName), cppLevel(level) {}

    void displayInfo() const override {
        cout << "CppStudent Name: " << name << ", C++ Level: " << cppLevel << "\n";
    }
};

class GermanStudent : public Student {
private:
    string germanLevel;

public:
    GermanStudent(const string& studentName, const string& level) : Student(studentName), germanLevel(level) {}

    void displayInfo() const override {
        cout << "GermanStudent Name: " << name << ", German Level: " << germanLevel << "\n";
    }
};

int main() {

    CppStudent cppStudent("Saurav", 99);
    GermanStudent germanStudent("John Wick", "Intermediate");


    Student* studentPtr = new CppStudent("Saurav", 99);

    studentPtr->displayInfo();


    delete studentPtr;

}

