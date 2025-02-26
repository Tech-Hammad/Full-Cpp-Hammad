#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int size) 
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1])
			{
				T temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

template <typename T>
void printArray(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() 
{
	int intArr[] = { 5, 2, 9, 1, 5, 6 };
	double doubleArr[] = { 3.2, 1.5, 4.8, 2.9 };

	bubbleSort<int>(intArr, 6);
	bubbleSort<double>(doubleArr, 4);

	cout << "Sorted int array: ";
	printArray(intArr, 6);

	cout << "Sorted double array: ";
	printArray(doubleArr, 4);

	return 0;
}
