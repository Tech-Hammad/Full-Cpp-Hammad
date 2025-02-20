#include <iostream>
using namespace std;

class Box
{
 private:
     double length;     
     double breadth;    
     double height;  
 public:
      static int objectCount;
      
      // Constructor definition
      Box(double l = 2.0, double b = 2.0, double h = 2.0)
      {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         
         objectCount++;
      }
      double Volume()
      {
         return length * breadth * height;
      }
};
// Initialize static member 
int Box::objectCount = 0;

int main()
{
   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2

   // Total number of objects
   cout << "Total objects: " << Box::objectCount << endl;

   return 0;
}