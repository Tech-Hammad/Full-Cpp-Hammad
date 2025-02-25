#include<iostream>
using namespace std;

class Shape
{
protected:
	char* color;
	int sides;
public:
	Shape(char* c, int s)
	{
		cout << "Shape constructor called.\n";
		int size = strlen(c) + 1;
		color = new char[size + 1];
		strcpy_s(color, size, c);
		sides = s;
	}

	virtual float area()
	{
		return 0.0;
	}

	virtual ~Shape()
	{
		delete[] color;
		cout << "Base class Shape destructor called.\n";
	}

	virtual void display()
	{
		cout << "Shape Color: " << color << ", Sides: " << sides << "\n";
	}
};

class Circle : public Shape
{
private:
	float radius;
public:

	Circle(char* c, float r) : Shape(c, 0)
	{
		radius = r;
		cout << "Circle constructor called.\n";
	}

	~Circle()
	{
		cout << "Derived class Circle destructor called.\n";
	}

	float area() override
	{
		return 3.14 * radius * radius;
	}

	void display() override
	{
		cout << "Circle: Color: " << color << ", Radius: " << radius << ", Area: " << area() << "\n";
	}
};

class Rectangle : public Shape
{
private:
	float width;
	float height;
public:

	Rectangle(char* c, float w, float h) : Shape(c, 4), width(w), height(h)
	{
		cout << "Rectangle constructor called.\n";
	}

	~Rectangle()
	{
		cout << "Derived class Rectangle destructor called.\n";
	}

	float area() override
	{
		return width * height;
	}

	void display() override
	{
		cout << "Rectangle: Color: " << color << ", Width: " << width << ", Height: " << height << ", Area: " << area() << "\n";
	}
};


int main()
{
	Shape* shapes[4];

	shapes[0] = new Circle("Red", 5.0);
	shapes[1] = new Rectangle("Blue", 4.0, 6.0);
	shapes[2] = new Circle("Green", 3.5);
	shapes[3] = new Rectangle("Yellow", 2.0, 8.0);

	cout << "\nDisplaying Shape Details and Areas:\n";
	for (int i = 0; i < 4; i++)
	{
		shapes[i]->display();    // Dynamic polymorphism 
	}

	cout << "\n\n";
	for (int i = 0; i < 4; i++)
	{
		delete shapes[i];        // Proper cleanup using virtual destructors
	}

	return 0;
}