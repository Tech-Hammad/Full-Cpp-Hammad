#include <iostream>
using namespace std;

// Calulate Length Function
int getLength(const char str[])
{
	int length = 0;
	while (str[length] != '\0') 
	{
		length++;
	}
	return length;
}

// Function to compare two character arrays (case-sensitive)
bool compare(const char array1[], const char array2[])
{
	if (getLength(array1) == getLength(array2)) 
	{
		for (int i = 0; array1[i] != '\0'; i++) 
		{
			if (array1[i] != array2[i]) 
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
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "World";

	// Compare Two Same Strings
	if (compare(str1, str2)) 
	{
		cout << "str1 and str2 are equal." << "\n";
	}
	else 
	{
		cout << "str1 and str2 are not equal." << "\n";
	}

	// Comparing Two Different Strings
	if (compare(str1, str3))
	{
		cout << "str1 and str3 are equal." << "\n";
	}
	else 
	{
		cout << "str1 and str3 are not equal." << "\n";
	}

	return 0;
}
