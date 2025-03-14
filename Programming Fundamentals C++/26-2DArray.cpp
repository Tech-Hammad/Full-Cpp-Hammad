// INPUT IN 2D ARRAY AND OUTPUT AND SEARCHING INDEX
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter Number of Rows and Columns:-";
    cin >> n >> m;

    int arr[n][m];
    cout << "Enter " << n << " Rows and " << m << " Columns:-" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Searching index in 2D array
    int x;
    cout << "Enter Number Which Index you want to Search in 2D Array:-";
    cin >> x;

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "Index:- Row " << i << " Column " << j << endl;  // this will give index of row and column
                flag = true;
            }
        }
    }

    if (flag)
    {
        cout << "Number Found";
    }
    else
    {
        cout << "Number Not Found";
    }
    return 0;
}
