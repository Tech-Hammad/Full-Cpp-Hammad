#include <iostream>
#include <cstring>
using namespace std;

class ShallowCopy
{
private:
    char* name; 
public:
    ShallowCopy(const char* n) 
    {
        name = new char[strlen(n) + 1]; 
        strcpy(name, n);
    }

    // Copy Constructor (Shallow Copy)
    ShallowCopy(const ShallowCopy& obj) 
    {
        name = obj.name; // Copy only the pointer
    }

    void display()
    {
        cout << "Name: " << name << endl;
    }

    ~ShallowCopy() 
    {
        delete[] name;
    }
};

int main()
{
    ShallowCopy obj1("Hammad");  
    ShallowCopy obj2 = obj1;     

    cout << "Object 1: ";
    obj1.display();
    
    cout << "Object 2 (Copied): ";
    obj2.display();

    return 0;
}

// A shallow copy copies the pointer but not the actual data in dynamic memory.
// If one object is modified, it affects the other because they share the same memory.