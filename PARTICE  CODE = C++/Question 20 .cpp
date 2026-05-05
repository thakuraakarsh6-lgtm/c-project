// wap to a program to reverse a number
#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, rem;

    cout << "Enter a number: ";
    cin >> num;

    while(num != 0) {
        rem = num % 10;          // get last digit
        reverse = reverse * 10 + rem; // add digit to reverse
        num = num / 10;          // remove last digit
    }

    cout << "Reversed number = " << reverse;

    return 0;
}