// wap to for finding greater two numbers
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << "Greater number is: " << a;
    } 
    else if (b > a) {
        cout << "Greater number is: " << b;
    } 
    else {
        cout << "Both numbers are equal";
    }

    return 0;
}