// wap for swapping value of value of two number using thrid one.
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    temp = a;   // store a in temp
    a = b;      // assign b to a
    b = temp;   // assign temp to b

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}