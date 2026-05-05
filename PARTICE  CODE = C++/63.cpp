// wap to program constructor in inheritance 
#include <iostream>
using namespace std;


class Person
{
protected:
    string name;

public:
    
    Person(string n)
    {
        name = n;
        cout << "Person Constructor called" << endl;
    }
};


class Student : public Person
{
    int id;

public:
    
    Student(string n, int i) : Person(n) 
    {
        id = i;
        cout << "Student Constructor called" << endl;
    }

    void display()
    {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

int main()
{
    Student s1("Sahil", 101);
    s1.display();

    return 0;
}