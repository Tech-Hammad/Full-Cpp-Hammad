// Linear Searching in Array
#include <iostream>
using namespace std;

void LinearSearch(int arr[], int n, int key)
{
    bool found = false;    // Flag to track if key is found
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key) 
        {
            cout << "Found at Index: " << i << "\n";
            found = true;
            break; 
        }
    }
    if (!found) 
    {
        cout << "Not Found.\n";
    }
}

int main()
{
    int n,key;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n];   // Dynamic allocation of Array

    cout<< "Enter Elements of Array:-\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the Key to Search:";
    cin >> key;
    
    LinearSearch(arr, n, key);
    delete arr;
    return 0;
}
