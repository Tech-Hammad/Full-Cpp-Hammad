#include <iostream>
using namespace std;

class Rectangle
{
private:
	double length;
	double width;

public:
	// Default Constructor
	Rectangle() : length(0.0), width(0.0) {}

	// Parameterized Constructor
	Rectangle(double l, double w) : length(l), width(w) {}

	double getLength() const 
	{
		return length;
	}
	void setLength(double l)
	{
		length = l;
	}
	double getWidth() const
	{
		return width;
	}
	void setWidth(double w) 
	{
		width = w;
	}
	void display() const
	{
		cout << "Rectangle [Length: " << length << ", Width: " << width << "]" << endl;
	}

	// Overload << operator for output

	friend ostream& operator<<(ostream& out, const Rectangle& rect) 
	{
		out << "Rectangle [Length: " << rect.length << ", Width: " << rect.width << "]";
		return out;
	}
        
        // Overload >> operator for input
	friend istream& operator>>(istream& in, Rectangle& rect)
	{
		cout << "Enter length: ";
		in >> rect.length;
		cout << "Enter width: ";
		in >> rect.width;
		return in;
	}
};

int main()
{
	Rectangle rect1;
	cout << "Default Rectangle: ";
	rect1.display();

	Rectangle rect2(10.5, 20.3);
	cout << "Parameterized Constructor Rectangle: " << rect2 << endl;

	rect1.setLength(15.2);
	rect1.setWidth(25.7);
	cout << "Rectangle after setting values: " << rect1 << endl;

	// Using >> operator to input values
	Rectangle rect3;
	cin >> rect3;

	cout << "Rectangle from user input: " << rect3 << endl;

	system("pause");
	return 0;
}
