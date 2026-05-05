// wap to program different type constructor
#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;

public:
    
    Student()
    {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor called" << endl;
    }

    
    Student(int i, string n)
    {
        id = i;
        name = n;
        cout << "Parameterized Constructor called" << endl;
    }

    Student(const Student &s)
    {
        id = s.id;
        name = s.name;
        cout << "Copy Constructor called" << endl;
    }

    void display()
    {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main()
{
    Student s1;                 
    Student s2(101, "Sahil");   
    Student s3 = s2;           

    s1.display();
    s2.display();
    s3.display();

    return 0;
}