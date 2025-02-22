#include <iostream>
#include <cstring>
using namespace std;

class Animal 
{
protected:
    char* name;
    int age;
public:
    Animal(const char* n = "Unknown", int a = 0) 
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        age = a;
        cout << "Animal object created" << endl;
    }
    
    void display()
    {
        cout << "This is an animal named " << name << " and is " << age << " years old." << endl;
    }

    // Destructor
    ~Animal()
    {
        delete[] name;
    }
};

// Derived class
class Cat : public Animal
{
public:
    Cat(const char* n, int a) : Animal(n, a) 
    {
        cout << "Cat object created" << endl;
    }
};

int main()
{
    Animal a1("Cat", 5);
    a1.display();

    Cat c1("Maxxie", 3);
    c1.display(); 

    return 0;
}
ss