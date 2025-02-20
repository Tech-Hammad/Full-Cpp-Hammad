#include <iostream>
#include <cstring> 
using namespace std;

class Student 
{
private:
    char name[50];
    int age;

public:
    Student(char name[50], int age)
    {
        strcpy(this->name, name); 
        this->age = age;
    }

    void display() 
    {
        cout << "Name: " << this->name << ", Age: " << this->age << endl;
    }
};

int main()
{
    Student s1("Hammad", 21);
    s1.display();

    return 0;
}
