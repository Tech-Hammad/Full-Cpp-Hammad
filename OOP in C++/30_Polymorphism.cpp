#include <iostream>
#include <cstring>
using namespace std;

// Global Fnction to Copy Strings
void CopyString(char*& dest, const char* source)
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

class Animal
{
protected:
    char* name;
public:
    Animal(const char* n) 
    {
        CopyString(name,n);
    }

    void setName(const char* n) 
    {
        delete[] name; 
        CopyString(name,n);
    }

    void display()
    {
        cout << "Animal Name: " << name << "\n";
    }

    virtual void makeSound()
    {
        cout << "Base class: Animal object" << "\n";
    }

    virtual ~Animal()
    {  
        delete[] name;
    }
};

class Dog : public Animal
{
public:
    Dog(const char* n) : Animal(n) {}

    void makeSound() override
    {
        cout << "Derived class: Dog object" << "\n";
    }
};

class Cat : public Animal
{
public:
    Cat(const char* n) : Animal(n) {}

    void makeSound() override
    {
        cout << "Derived class: Cat object" << "\n";
    }
};

int main() 
{
    Animal* animal = new Animal("Generic Animal");
    Cat* cat = new Cat("Meoww!");
    Dog* dog = new Dog("Whoff!");

    animal->display();
    animal->makeSound(); // Call Animal::makeSound()

    cat->display();
    cat->makeSound();    // Call Cat::makeSound()

    dog->display();
    dog->makeSound();    // Call Dog::makeSound()


    Animal* animalPtr;   // Base Class Ptr
    animalPtr = cat;     // Assign Derive object to Base class pointer
    animalPtr->makeSound(); // Call Cat::makeSound() because makeSound is virtual

    animalPtr = dog;     // Assign subclass object to superclass pointer
    animalPtr->makeSound(); // Calls Dog::makeSound() because makeSound is virtual

    delete animal;
    delete cat;
    delete dog;

    return 0;
}
// This Task is Performing Polymorphism through Virtal Function and Method Function Overriding