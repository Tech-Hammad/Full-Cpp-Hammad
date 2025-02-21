#include <iostream>
#include <cstring>
using namespace std;

class Employee 
{
private:
    int EmployeeId;
    char* EmployeeName;
    double Salary;
public:
    // Copy Function for Strings
    void Copy(char*& dest, const char* source, int size) 
    {
        dest = new char[size + 1];
        for (int i = 0; i < size; i++) 
        {
            dest[i] = source[i];
        }
        dest[size] = '\0';
    }

    Employee() : EmployeeId(0), Salary(0.0)
    {
        cout << "Default Constructor Called....\n";
        EmployeeName = new char[1];
        EmployeeName[0] = '\0';
    }

    // Parameterized Constructor
    Employee(int EmpId, const char* Name, double sal)
    {
        EmployeeId = EmpId;
        Salary = sal;
        int size = strlen(Name);
        Copy(EmployeeName, Name, size);
    }

    // Constructor (Deep Copy)
    Employee(const Employee& other) 
    {
        EmployeeId = other.EmployeeId;
        Salary = other.Salary;
        int size = strlen(other.EmployeeName);
        Copy(EmployeeName, other.EmployeeName, size);
    }
    
    // Destructor
    ~Employee() 
    {
        delete[] EmployeeName;
    }

    // Getters
    char* getName() const 
    {
        return EmployeeName;
    }
    int getEmployeeId() const 
    {
        return EmployeeId;
    }
    double getSalary() const 
    {
        return Salary;
    }

    // Setters
    void setName(const char* NewName) 
    {
        delete[] EmployeeName;
        int size = strlen(NewName);
        Copy(EmployeeName, NewName, size);
    }
    void setEmployeeId(int NewId)
    {
        EmployeeId = NewId;
    }
    void setSalary(double NewSalary)
    {
        Salary = NewSalary;
    }
    
    void display() 
    {
        cout << "Employee Id    : " << EmployeeId << "\n";
        cout << "Employee Name  : " << EmployeeName << "\n";
        cout << "Employee Salary: " << Salary << "\n";
    }

    friend class Company;  // Give Company class access to private members
};

class Company
{
public:
    // Calculate 10% bonus
    double calculateBonus(const Employee& emp)
    {
        return emp.Salary * 0.1; // 10% of salary
    }

    void printPayslip(const Employee& emp)
    {
        double bonus = calculateBonus(emp);
        double totalSalary = emp.Salary + bonus; 

        cout << "\nPayslip for " << emp.EmployeeName << endl;
        cout << "Employee ID: " << emp.EmployeeId << endl;
        cout << "Base Salary: " << emp.Salary << endl;
        cout << "Bonus (10%): " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    void updateSalary(Employee& emp, double newSalary) 
    {
        emp.Salary = newSalary;
    }
};

int main()
{
    Employee emp1(793, "Hammad Ahmad", 20450.0);
    emp1.display();
    cout << "\n";

    Employee emp2 = emp1;  // Invokes Copy Constructor
    emp2.display();
    cout << "\n";

    emp2.setName("Suhaib Ijaz");
    emp2.setEmployeeId(792);
    emp2.setSalary(20950);
    emp2.display();
    cout << "\n";

    Company company;
    emp1.display();

    company.printPayslip(emp1);
    company.updateSalary(emp1, 60000.0);

    cout << "\n   Updated Salary  \n";
    emp1.display();

    return 0;
}
