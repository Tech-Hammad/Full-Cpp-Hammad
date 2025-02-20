#include<iostream>
using namespace std;

class Rectangle
{
private:
	double length;
	double width;
public:
	Rectangle()                      Default Constructor
	{
		length = 0.0;
		width = 0.0;
	}
	Rectangle(double l, double w)    Parameterized Constructor
	{
		length = l;
		width = w;
	}
	
	Rectangle(Rectangle &other)
	{
		length = other.length;
		width  = other.width;
	}

	void display()
	{
		cout << "Length: " << length << "\n";
		cout << "Width:  " << width << "\n";
	}
		
	double calculateArea()        
	{
		return length * width;
    }
};

int main()
{
	Rectangle obj1;
	cout << "Rectangle 1 (Default Constructor): \n";
	obj1.display();
	cout << "Area: " << obj1.calculateArea() << "\n";
	cout << "\n";

	Rectangle obj2(5.0, 3.0);
	cout << "Rectangle 2 (Parameterized Constructor): \n";
	obj2.display();
	cout << "Area: " << obj2.calculateArea() << "\n";
	cout << "\n";

	Rectangle obj3 = obj2;
	cout << "Rectangle 3 (Copy Constructor from Rectangle 2): \n";
	obj3.display();
	cout << "Area: " << obj3.calculateArea() << endl;
	cout << "\n";

	system("pause");
	return 0;
}