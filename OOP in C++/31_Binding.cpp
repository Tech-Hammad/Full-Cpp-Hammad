#include<iostream>
using namespace std;

class Base
{
public:
	virtual void print()
	{
		cout << "Base Print.\n";
	}
	virtual void show()
	{
		cout << "Base Show.\n";
	}
};

class Derived :public Base
{
public:
	void print()
	{
		cout << "Derived Print.\n";
	}
	void show()
	{
		cout << "Derived Show.\n";
	}
};

int main()
{
	Base *bptr;
	Derived der;

	bptr = &der;
	bptr->print();     // Output: Derived Print
	bptr->show();      // Output: Derived Show

	return 0;
}