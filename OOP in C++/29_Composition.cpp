#include <iostream>
using namespace std;

class Engine
{
public:
	Engine() 
	{ 
		cout << "Engine Created.\n";
	}
	~Engine()
	{
		cout << "Engine Destroyed.\n"; 
	}
};

class Car
{
private:
	Engine engine;  // Engine is part of Car (Composition)
public:
	Car()
	{
		cout << "Car Created.\n"; 
	}
	~Car()
	{ 
		cout << "Car Destroyed.\n";
	}
};

int main()
{
	Car myCar;  // When Car is created, Engine is also created
	            // When Car is destroyed, Engine is also destroyed
	
	return 0;   
}	
/*Composition: A "part-of" relationship where the contained object's is strictly bound to the container.If the container is destroyed, the contained object is also destroyed.*/	