#include <iostream>
#include <cstring>
using namespace std;

// Function to get the length
int getLength(const char str[]) 
{
	int length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return length;
}

// Function to compare the character arrays without case sensitivity
bool compareCase(const char array1[], const char array2[]) 
{
	if (getLength(array1) == getLength(array2)) 
	{
		for (int i = 0; array1[i] != '\0'; i++)
		{
			if (array1[i] != array2[i] && array1[i] != array2[i] + 32 && array1[i] != array2[i] - 32)
			{
				return false;
			}
		}
		return true;
	}
	else 
	{
		return false;
	}
}

int main() 
{
	char str1[] = "Hello World";
	char str2[] = "HELLO WORLD";

	if (compareCase(str1, str2)) 
	{
		cout << "The strings are equal (case insensitive)." << "\n";
	}
	else
	{
		cout << "The strings are not equal." << "\n";
	}

	return 0;
}
