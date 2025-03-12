// Finding Length of Largest Word in an array
#include <iostream>
using namespace std;

int LongestWordLength(char arr[])
{

    int len = 0;
    while (arr[len] != '\0')
    {
        len++;
    }

    int larg = 0, curr_len = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] != ' ')
        {
            curr_len++;
        }
        else
        {
            larg = max(larg, curr_len);
            curr_len = 0;
        }
    }
    return max(larg, curr_len);
}

int main()
{
    char arr[100];
    cout << "Enter the Paragraph:-";
    cin.getline(arr, 100);
    cout << "Largest Length of Word is:-" << LongestWordLength(arr);
    
    return 0;
}
