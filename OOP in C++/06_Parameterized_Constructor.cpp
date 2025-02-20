// Parameterized Constructor

#include <iostream>
using namespace std;

class CGPA
{
 private:
    int marks;
    int creditHours;
 public:
    // Default Constructor
    CGPA()
    {
        cout<<"Default Constructor Called."<<endl;
    }

    // Parameterized constructor
    CPGA(int m, int cr)
    {
        marks=m;
        creditHours=cr;
    }  
};

int main()
{
   CGPA student(12,4);   // Parameterized Called 
   CGPA student2;        // Default Called

   return 0;
}
