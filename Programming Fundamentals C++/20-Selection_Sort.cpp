// Selection Sort : We replace min num in array with first num of array
#include<iostream>
using namespace std;

void Selection_Sort(int arr[], int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		int minimum = i;

		for (int j = i + 1;j < n;j++)
		{
			if (arr[j] < arr[minimum])
			{
				minimum = j;
			}
		}
		int temp = arr[minimum];
		arr[minimum] = arr[i];
		arr[i] = temp;
	}

	cout << "After Selection Sort:-" << "\n";
	cout << "Array:- ";
	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << ", ";
	}
	cout << "\n";
}

int main()
{
	int arr[] = { 12,46,3,21,2,9,11,32 };
	int n = sizeof arr / sizeof arr[0];

	cout << "Before Selection Sort:-\n";
	cout << "Array:- ";
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << ", ";
	}
	cout << "\n";

	Selection_Sort(arr, n);

	return 0;
}

