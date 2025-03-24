// Binary Search :In this we dont start finding element from start we start from mid bcz it decreases time complexity
#include<iostream>
using namespace std;

int BinarySearch(int arr[], int low, int high, int x)
{
	while (low <= high)
	{
        int mid = low + (high - low) / 2;

        // if x is present at mid
        if (arr[mid] == x)
        { 
            return mid;
        }

        // If x is greater than mid ignore left 
        if (arr[mid] < x)
        {
            low = mid + 1;
        }

        // If x is smaller than mid ignore right 
        else
        {
            high = mid - 1;
        }
	}
    return -1;
}

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the Key to Search:-";
    cin >> x;

    int result = BinarySearch(arr, 0, n - 1, x);
    
    if (result == -1)
    {
        cout << "Element is not present in array";
    }
    else
    {
        cout << "Element is present at index " << result;
    }

	return 0;
}
