// wap to program to default constructor
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

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1;  
    s1.display();

    return 0;
}