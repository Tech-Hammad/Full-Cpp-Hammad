#include <iostream>
using namespace std;

template <typename T>
void swapElements(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 10, y = 20;
	double p = 1.5, q = 3.5;

	cout << "Before swap: x = " << x << ", y = " << y << "\n";
	swapElements<int>(x, y);
	cout << "After swap: x = " << x << ", y = " << y << "\n";

	cout << "\n";

	cout << "Before swap: p = " << p << ", q = " << q << "\n";
	swapElements<double>(p, q);
	cout << "After swap: p = " << p << ", q = " << q << "\n";

	system("pause");
	return 0;
}
