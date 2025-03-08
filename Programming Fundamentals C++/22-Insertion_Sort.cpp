// Insertion SOrt : Insert an array from unsorted array to its corrects position in sorted array
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    if (n <= 0) 
    {
        cout << "Invalid array size!" << endl;
    }

    int* arr = new int[n]; 

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > current) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    delete[] arr; 
    return 0;
}
