// wap to proggraming menu driven program
#include <iostream>
using namespace std;

int main()
{
    int choice, a, b;

    do
    {
        cout << "\nMenu\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4)
        {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch(choice)
        {
            case 1:
                cout << "Addition = " << a + b << endl;
                break;

            case 2:
                cout << "Subtraction = " << a - b << endl;
                break;

            case 3:
                cout << "Multiplication = " << a * b << endl;
                break;

            case 4:
                cout << "Division = " << a / b << endl;
                break;

            case 5:
                cout << "Exiting program...";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 5);

    return 0;
}