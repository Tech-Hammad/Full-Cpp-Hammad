#include <iostream>
using namespace std;

int getLength(const char str[])
{
	int length = 0;
	while (str[length] != '\0') 
	{
		length++;
	}
	return length;
}

// Function to find the first occurrence of a substring in a string
int find(const char str[], const char substr[]) 
{
	int strLen = getLength(str);
	int subLen = getLength(substr);

	for (int i = 0; i <= strLen - subLen; i++) 
	{
		int j;
		for (j = 0; j < subLen; j++) 
		{
			if (str[i + j] != substr[j]) 
			{
				break;
			}
		}
		if (j == subLen)
		{ // If full substring matched
			return i;
		}
	}
	return -1; // Not found
}

int main()
{
	char str[] = "Hello, World!";
	char substr1[] = "World";
	char substr2[] = "C++";

	int index1 = find(str, substr1);
	int index2 = find(str, substr2);

	if (index1 != -1)
	{
		cout << "Substring \"" << substr1 << "\" found at index: " << index1 << "\n";
	}
	else
	{
		cout << "Substring \"" << substr1 << "\" not found." << "\n";
	}

	if (index2 != -1)
	{
		cout << "Substring \"" << substr2 << "\" found at index: " << index2 << "\n";
	}
	else 
	{
		cout << "Substring \"" << substr2 << "\" not found." << "\n";
	}
	
	return 0;
}
