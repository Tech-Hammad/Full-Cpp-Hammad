#include <iostream>
using namespace std;

template<typename T>
class Array 
{
private:
	T* arr;
	int size;
public:
	Array(int s)
	{
		size = s;
		arr = new T[size];
	}

	void setElement(int index, T value) 
	{
		if (index >= 0 && index < size) 
		{
			arr[index] = value;
		}
		else 
		{
			cout << "Index out of bounds!" << "\n";
		}
	}

	T getElement(int index) 
	{
		if (index >= 0 && index < size) 
		{
			return arr[index];
		}
		else 
		{
			cout << "Index out of bounds!" << "\n";
			return T();   Return default value
		}
	}

	void display()
	{
		for (int i = 0; i < size; i++) 
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
	}

	~Array() 
	{
		delete[] arr;
	}
};

int main() 
{
	Array<int>intArray(5);
	intArray.setElement(0, 10);
	intArray.setElement(1, 20);
	intArray.setElement(2, 30);
	intArray.setElement(3, 40);
	intArray.setElement(4, 50);

	cout << "Integer Array: ";
	intArray.display();

	Array<double>doubleArray(3);
	doubleArray.setElement(0, 1.1);
	doubleArray.setElement(1, 2.2);
	doubleArray.setElement(2, 3.3);

	cout << "Double Array: ";
	doubleArray.display();

	return 0;
}
