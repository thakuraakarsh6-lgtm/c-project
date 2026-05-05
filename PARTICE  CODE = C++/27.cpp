// wap to you dynamically allocate memory for an array
#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter size of array: ";
    cin >> n;

    int *arr;         
    arr = new int[n];  

    cout << "Enter elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;   

    return 0;
}