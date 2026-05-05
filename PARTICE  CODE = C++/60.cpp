// wap to program student constructor
#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;
    float marks;

public:
   
    Student(int i, string n, float m)
    {
        id = i;
        name = n;
        marks = m;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{

    Student s1(101, "Sahil", 85.5);
    Student s2(102, "Ravi", 90.0);

    s1.display();
    cout << endl;
    s2.display();

    return 0;
}