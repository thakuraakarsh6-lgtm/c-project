// wap to add to number using class 
#include <iostream>
using namespace std;

class Add {
public:
    int a, b, sum;

    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void calculate() {
        sum = a + b;
    }

    void display() {
        cout << "Sum = " << sum;
    }
};

int main() {
    Add obj;   // object creation

    obj.input();
    obj.calculate();
    obj.display();

    return 0;
}