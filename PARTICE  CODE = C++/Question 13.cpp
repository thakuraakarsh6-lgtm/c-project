// design & system info system where student details given by user constructor i.e id name marks subject calcuate doble marks.percentage grade
#include <iostream>
using namespace std;

class Student {
    int id;
    string name, subject;
    double marks, percentage;
    char grade;

public:
    
    Student(int i, string n, string s, double m) {
        id = i;
        name = n;
        subject = s;
        marks = m;

        percentage = marks;   

        // Grade calculation
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 50)
            grade = 'D';
        else
            grade = 'F';
    }

    void display() {
        cout << "\nStudent ID: " << id;
        cout << "\nName: " << name;
        cout << "\nSubject: " << subject;
        cout << "\nMarks: " << marks;
        cout << "\nPercentage: " << percentage << "%";
        cout << "\nGrade: " << grade << endl;
    }
};

int main() {
    int id;
    string name, subject;
    double marks;

    cout << "Enter Student ID: ";
    cin >> id;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Subject: ";
    cin >> subject;

    cout << "Enter Marks: ";
    cin >> marks;

    // Object created with constructor
    Student s(id, name, subject, marks);

    s.display();

    return 0;
}