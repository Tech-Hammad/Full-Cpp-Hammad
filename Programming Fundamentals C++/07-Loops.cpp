// This File Cover all 3 Loops used in C++
#include <iostream>
using namespace std;

int main()
{
    char choice;
    do 
    {
        int n;
        cout << "Enter a positive number: ";
        cin >> n;

        // Using for loop to print numbers from 1 to n
        cout << "Numbers from 1 to " << n << ": ";
        for (int i = 1; i <= n; i++) 
        {
            cout << i << " ";
        }
        cout << endl;

        // Using while loop to print even numbers up to n
        cout << "Even numbers up to " << n << ": ";
        int i = 2;
        while (i <= n)
        {
            cout << i << " ";
            i = i+2;
        }
        cout << endl;
        cout << "Do you want to try again? (Yes/No): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Using do while loop for repetition

    cout << "Program exited successfully.\n";
    return 0;
}
