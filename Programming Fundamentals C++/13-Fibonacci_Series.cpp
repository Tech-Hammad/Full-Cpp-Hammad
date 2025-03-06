#include <iostream>
using namespace std;

void generateFibonacci(int startTerm, int endTerm)
{
    int* Series = new int[endTerm + 1]; 
    Series[0] = 0;
    Series[1] = 1;

    for (int i = 2; i <= endTerm; i++) 
    {
        Series[i] = Series[i - 1] + Series[i - 2]; // n= n-1 + n-2
    }

    for (int j = startTerm; j <= endTerm; j++)
    {
        cout << Series[j] << " ";
    }
    cout << "endl";

    delete[] Series; 
}

int main()
{
    int choice;
    do {
        cout << "----------Menu----------" << endl;
        cout << "1. Generate Fibonacci series up to nth Term." << endl;
        cout << "2. Generate Fibonacci series from Starting Term to Ending Term." << endl;
        cout << "3. Exit." << endl;
        cout << "Enter your Choice: ";
        cin >> choice;

        if (choice == 1) 
        {
            int n;
            cout << "How many terms of the Fibonacci series you want to generate: ";
            cin >> n;
            cout << "Fibonacci series up to the " << n << "th term is: ";
            generateFibonacci(0, n - 1);
        } 
        else if (choice == 2) 
        {
            int start, end;
            cout << "Enter Starting Term of the Series: ";
            cin >> start;
            cout << "Enter Ending Term of the Series: ";
            cin >> end;

            cout << "Fibonacci Series from " << start << "th term to " << end << "th term is: ";
            generateFibonacci(start - 1, end - 1);
        } 
        else if (choice == 3) 
        {
            cout << "Exiting...endl";
        } 
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
