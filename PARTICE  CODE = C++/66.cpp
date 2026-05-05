// wap to program t demonstrate single inheritance using employee and facult class
#include <iostream>
using namespace std;


class Employee {
protected:
    int empID;
    string name;

public:
    void setEmployeeData(int id, string n) {
        empID = id;
        name = n;
    }

    void displayEmployeeData() {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << name << endl;
    }
};

class Faculty : public Employee {
private:
    string department;
    string designation;

public:
    void setFacultyData(string dept, string desig) {
        department = dept;
        designation = desig;
    }

    void displayFacultyData() {
        // Call base class function
        displayEmployeeData();
        cout << "Department: " << department << endl;
        cout << "Designation: " << designation << endl;
    }
};

int main() {
    
    Faculty f1;

    
    f1.setEmployeeData(101, "Sahil Rana");

    
    f1.setFacultyData("Computer Science", "Assistant Professor");

    
    f1.displayFacultyData();

    return 0;
}