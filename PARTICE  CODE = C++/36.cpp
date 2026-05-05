// wap to programming to largest in array
#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, largest;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    largest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest element = " << largest;

    return 0;
}