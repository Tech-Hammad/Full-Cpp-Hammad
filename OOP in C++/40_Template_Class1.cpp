#include <iostream>
using namespace std;

template <class T>
class Number
{
private:
	 Variable of type T
	T num;
public:
	Number(T n)     constructor
	{
		num = n;
	}
	T getNum()
	{
		return num;
	}
};

int main() 
{

	// create object with int type
	Number<int> numberInt(7);
	// create object with double type
	Number<double> numberDouble(7.7);

	cout << "int Number = " << numberInt.getNum() << "\n";
	cout << "double Number = " << numberDouble.getNum() << "\n";

	return 0;
}