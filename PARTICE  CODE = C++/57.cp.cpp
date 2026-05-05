// wap to programming to parameterized constructor
#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;

public:
    
    Student(int i, string n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    
    Student s1(101, "Sahil");
    Student s2(102, "Ravi");

    s1.display();
    s2.display();

    return 0;
}