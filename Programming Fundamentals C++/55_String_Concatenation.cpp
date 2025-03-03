#include <iostream>
using namespace std;

// Length Function 
int getLength(const char str[])
{
	int length = 0;
	while (str[length] != '\0') 
	{
		length++;
	}
	return length;
}

// Function to concatenate two strings
void concatenate(char*& dest, const char str1[], const char str2[]) 
{
	int len1 = getLength(str1);
	int len2 = getLength(str2);

	dest = new char[len1 + len2 + 1]; 

	int i;
	for (i = 0; i < len1; i++)
	{
		dest[i] = str1[i];
	}
	for (int j = 0; j < len2; j++, i++) 
	{
		dest[i] = str2[j];
	}

	dest[i] = '\0'; 
}

int main() 
{
	char str1[] = "Hello,I am Hammad, ";
	char str2[] = "I Love Coding";

	char* result = nullptr;
	concatenate(result, str1, str2);

	cout << "Concatenated String: " << result << endl;

	delete[] result;

	return 0;
}
