// wap to alphabet palindrome pyramid pattern c++
#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        
        for(int j = 1; j <= rows - i; j++)
            cout << "  ";

    
        char ch = 'A' + i - 1;
        for(int j = 1; j <= i; j++)
        {
            cout << ch-- << " ";
        }

        
        ch = 'B';
        for(int j = 1; j < i; j++)
        {
            cout << ch++ << " ";
        }

        cout << endl;
    }

    return 0;
}