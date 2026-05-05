// wap to program floyd'& triangle pattern in c++
#include <iostream>
using namespace std;

int main()
{
    int rows, num = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++) // rows
    {
        for(int j = 1; j <= i; j++) // columns in each row
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}