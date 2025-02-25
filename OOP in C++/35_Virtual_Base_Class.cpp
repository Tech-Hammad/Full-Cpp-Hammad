// Using Virtual Inheritance to Solve Diamond Problem
#include <iostream>
#include <cstring>
using namespace std;

// Global Function to Copy Strings
void CopyString(char*& dest, char* source)
{
    int size = strlen(source);
    dest = new char[size + 1];
    int i;
    for(i=0;source[i]!='\0';i++)
    {
        dest[i]=source[i];
    }
    dest[i]=source[i];
}

class Person
{
private:
	char* name;       // Name of the person.
	int age;
public:

	Person()
	{
		cout << "Person Default constructor called.\n";
		age = 0;
	}
	Person(char* n, int a)
	{
		cout << "Person parameterized constructor called.\n";
		CopyString(name,n);
		age = a;
	}

	void display()
	{
		cout << "Name of the Perosn: " << name << "\n";
		cout << "Age of Person: " << age << "\n";
	}
};

class Student :virtual public Person
{
public:
	Student()
	{
		cout << "Student Constructor Called.\n";
	}
	Student(char* n, int a) :Person(n, a)
	{
		cout << "Student parameterized constructor called.\n";
	}
};

class Teacher :virtual public Person
{
public:
	Teacher()
	{
		cout << "Teacher Constructor Called.\n";
	}
	Teacher(char* n, int a) :Person(n, a)
	{
		cout << "Teacher parameterized constructor called.\n";
	}

};

class TA :public Teacher, public Student
{
public:
	TA()
	{
		cout << "TA Constructor Called.\n";
	}

	TA(char* n, int a) : Person(n, a), Teacher(n, a), Student(n, a)
	{
		cout << "TA Parameterized Constructor Called.\n";
	}

};

int main()
{
	TA t1;
	TA t2("Hammad Ahmad", 20);
	t2.display();             // Ambiguious due to multiple inheritance. (Now Error Resolved)

	return 0;
}
