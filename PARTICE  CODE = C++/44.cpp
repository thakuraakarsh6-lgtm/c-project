// wap to programming binary search 
#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, item, low = 0, high, mid;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> item;

    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == item)
        {
            cout << "Element found at position " << mid + 1;
            found = true;
            break;
        }
        else if(arr[mid] < item)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(!found)
        cout << "Element not found";

    return 0;
}