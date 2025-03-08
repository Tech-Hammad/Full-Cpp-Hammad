// Find max num in array

#include <iostream>
using namespace std;

int main()
{
    int n, max = 0;
    cout << "Enter size of array :";
    cin >> n;
    int arr[n];  // Initialized Array With Size
    cout << "Enter the Array Elements:-" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The Maximun Number in this Array is :" << max << endl;
    
    return 0;
}
