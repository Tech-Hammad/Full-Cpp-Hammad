// UNION and ENUM
#include <iostream>
using namespace std;

union players
{   
    // In a union, only one member can be used at a time because memory is shared.
    int num;        // 4 byte
    char favChar;   // 1 byte
    float score;    // 4 byte
};
// If this were a structure, the total memory allocated would be 9 bytes.
// However, in a union, memory is shared, so the total allocated memory is equal to the largest member, which is 4 bytes.

int main()
{

    union players p1;
    p1.num = 20;
    p1.score = 169;   // Assigning a value to 'score', which will overwrite 'num' due to shared memory

    // Since memory is shared, accessing 'num' will now give garbage value
    cout << p1.num << endl;

    enum meal
    {
        breakfast,
        lunch,
        dinner
    }; 
    // This creates a new data type where the values are stored as integers starting from 0
    
    meal m1 = breakfast;

    cout << m1 << endl;         // 0 since breakfast is the first value in the enum
    cout << breakfast << endl;  // 0
    cout << lunch << endl;      // 1
    cout << dinner << endl;     // 2

    return 0;
}
