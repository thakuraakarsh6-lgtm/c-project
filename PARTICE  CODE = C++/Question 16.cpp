// wap to a program to check wheather a number is palindrome.
#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, remainder, original;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while(num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if(original == reverse)
        cout << "Number is Palindrome";
    else
        cout << "Number is not Palindrome";

    return 0;
}