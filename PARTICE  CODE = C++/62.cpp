// wap to program constructor overloading 
#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;
    float marks;

public:
    
    Student()
    {
        id = 0;
        name = "Unknown";
        marks = 0.0;
        cout << "Default Constructor called" << endl;
    }


    Student(int i, string n)
    {
        id = i;
        name = n;
        marks = 0.0;
        cout << "Parameterized Constructor (2 args) called" << endl;
    }

    
    Student(int i, string n, float m)
    {
        id = i;
        name = n;
        marks = m;
        cout << "Parameterized Constructor (3 args) called" << endl;
    }

    void display()
    {
        cout << "ID: " << id << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;               
    Student s2(101, "Sahil"); 
    Student s3(102, "Ravi", 95.5); 

    s1.display();
    s2.display();
    s3.display();

    return 0;
}