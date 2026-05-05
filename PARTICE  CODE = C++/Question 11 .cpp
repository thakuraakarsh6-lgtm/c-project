// wap to display simple class and object 
#include <iostream>
using namespace std;

class Student {
public:
    string name;

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1;   // object creation

    s1.name = "Sahil";   // assigning value
    s1.display();        // calling function

    return 0;
}