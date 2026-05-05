// wap to programming linear search 
#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, item, i, pos = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> item;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == item)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        cout << "Element found at position " << pos + 1;
    else
        cout << "Element not found";

    return 0;
}