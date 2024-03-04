#include <iostream>
using std::cout;


class studentDetails{
    private:
        int rollNumber;
        std::string studentName;
        int phoneNumber;
    public:
    void updateDetails(int roll, std::string name, int phone)
    {
        rollNumber = roll;
        studentName = name;
        phoneNumber = phone;
    }
    void printDetails(){
        cout << "Roll: " << rollNumber << "\n" << "Name: " << studentName << "\n"
        << "Phone: " << phoneNumber << "\n";
    }
};

int main()
{
    studentDetails student1;
    student1.updateDetails(1, "Sam", 123456789);
    student1.printDetails();
}