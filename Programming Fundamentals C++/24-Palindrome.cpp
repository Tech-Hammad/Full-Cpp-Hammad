// Palindrome Sequence

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array :";
    cin >> n;

    char arr[n + 1];
    cout<< "Enter " << n+1 << " Elements:-";
    cin >> arr;

    bool check = true;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = false;
            break;
        }
    }
    if (check == true)
    {
        cout << "It is Palindrome";
    }
    else
    {
        cout << "It is Not Palindrome";
    }
    return 0;
}
