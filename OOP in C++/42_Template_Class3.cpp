#include <iostream>
using namespace std;

// Class template with multiple and default parameters
template <class T, class U, class V = char>
class ClassTemplate
{
private:
	T var1;
	U var2;
	V var3;
public:
	ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {} 

	void printVar() 
	{
		cout << "var1 = " << var1 << "\n";
		cout << "var2 = " << var2 << "\n";
		cout << "var3 = " << var3 << "\n";
	}
};

int main() 
{
	// create object with int, double and char types

	ClassTemplate<int, double> obj1(7, 7.7, 'c');
	cout << "obj1 values: " << "\n";
	obj1.printVar();

	// create object with int, double and bool types

	ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
	cout << "\nobj2 values: " << "\n";
	obj2.printVar();
    
	return 0;
}