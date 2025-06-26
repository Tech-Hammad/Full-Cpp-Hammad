#include <iostream>
#include <string>
using namespace std;

class User_Data
{
public:
    int index_no;
    string name;
    int age;
    string registration_no;
    string semester;
    
    User_Data() 
    {
        index_no = 0;
        name = "";
        age = 0;
        registration_no = "";
        semester = "";
    }

    User_Data(int idx, string n, int a, string reg, string sem) {
        index_no = idx;
        name = n;
        age = a;
        registration_no = reg;
        semester = sem;
    }

    void display() const
    {
        cout << "Index No: " << index_no << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Registration No: " << registration_no << endl;
        cout << "Semester: " << semester << endl;
    }
};


int main() 
{
     User_Data user1(1, "Hammad", 21, "REG2023-001", "6th");

    user1.display();

    return 0;
}
