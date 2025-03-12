#include <iostream>
using namespace std;

int main()
{
    char arr[100] = "Hammad";
    int i = 0;  // Iterator

    while (arr[i] != '\0')
    {
        cout << arr[i];
        i++;
    }
    arr[i]='\0';  // Null Terminate the Array
    cout << endl;

    // input and output in chr array
    char arr2[100];
    cout<< "Input Your Element in Array:-";
    cin >> arr;

    cout << arr;
    return 0;
}
