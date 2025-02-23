#include <iostream>
#include <cstring>
using namespace std;

// Global Function to Copy Strings
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

class Teacher
{
private:
	char* name;       // Name of the teacher.
	char* subject;    // Subject taught by the teacher.
public:

	Teacher(char* n, char* sub)
	{
		CopyString(name,n);
        CopyString(subject,sub);
	}

	void displayTeacher()
	{
		cout << "Teachers Name: " << name << "\n";
		cout << "Subject Taght: " << subject << "\n";
	}

	~Teacher()
	{
		delete[] name;
		delete[] subject;
	}
};

class Researcher
{
private:
	char* researchArea;
	int publication;
public:

	Researcher(char* area, int pub)
	{
		CopyString(researchArea,area);
		publication = pub;
	}

	void displayResearcher()
	{
		cout << "Research Area: " << researchArea << "\n";
		cout << "Publication : " << publication << "\n";
	}

	~Researcher()
	{
		delete[] researchArea;
	}
};

class Professor :public Teacher, public Researcher
{
private:
	char* Department;    // Department the professor belongs 
	int teachingLoad;    // Number of courses taught per semester
public:

	Professor(char* n,char* sub, char* area, int pub, char* dept, int tLoad):Teacher(n, sub), Researcher(area, pub)
	{
		CopyString(Department,dept);
		teachingLoad = tLoad;
	}

	~Professor() 
	{
		delete[] Department;
	}

	void displayProfessor() 
	{
		displayTeacher();
		displayResearcher();

		cout << "Department: " << Department << endl;
		cout << "Teaching Load: " << teachingLoad << " courses per semester" << endl;
	}
};

int main()
{
	Professor prof("Dr. Hammad Ahmad", "Computer Science", "Artificial Intelligence", 25, "Engineering", 3);

	cout << "Professor Details:" << endl;
	prof.displayProfessor();

	return 0;
}