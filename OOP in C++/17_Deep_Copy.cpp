#include <iostream>
#include <cstring>
using namespace std;

class DeepCopy
{
private:
    char* name; 
public:
    DeepCopy(const char* n) 
    {
        name = new char[strlen(n) + 1]; 
        strcpy(name, n);
    }
    
    // Deep Copy Constructor
    DeepCopy(const DeepCopy& obj)
    {
        name = new char[strlen(obj.name) + 1]; 
        strcpy(name, obj.name);
    }

    void display() 
    {
        cout << "Name: " << name << endl;
    }

    ~DeepCopy() 
    {
        delete[] name; 
    }
};

int main() 
{
    DeepCopy obj1("Hammad");  
    DeepCopy obj2 = obj1;     

    cout << "Object 1: ";
    obj1.display();

    cout << "Object 2 (Copied): ";
    obj2.display();

    return 0;
}
