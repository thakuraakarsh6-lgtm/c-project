// wap to programming calculator using switch 
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op)
    {
        case '+':
            cout << "Addition = " << a + b;
            break;

        case '-':
            cout << "Subtraction = " << a - b;
            break;

        case '*':
            cout << "Multiplication = " << a * b;
            break;

        case '/':
            cout << "Division = " << a / b;
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}