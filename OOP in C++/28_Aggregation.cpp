#include <iostream>
using namespace std;

class Teacher 
{
public:
	Teacher()
	{
		cout << "Teacher Created.\n";
	}
	
	~Teacher()	
	{
		cout << "Teacher Destroyed.\n";
	}
};

class Department 
{
private:
	Teacher* teacher;  // Aggregation: Department does NOT own Teacher
public:
	Department(Teacher* t) 
	{
		teacher = t;
		cout << "Department Created.\n";
	}
	~Department() 
	{
		cout << "Department Destroyed.\n"; 
	}
};

int main()
{
	Teacher* t1 = new Teacher();  // Teacher exists independently
	Department* dept = new Department(t1);

	delete dept;  // Department is destroyed, but Teacher still exists	
	/*delete t1;*/    // Now we delete Teacher separately
    
	return 0;
}
/*Aggregation:"has-a" relationship where the contained object can exist independently of the container.It's a looser relationship.*/
