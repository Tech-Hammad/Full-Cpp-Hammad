// Write Program having 1 to 100 num and skip that num div by 3
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << " ";
    }

    cout << endl;

    for (int a = 1; a <= 100; a++)
    {
        // break Statement will stop loop when condition is satisfied
        if (a == 56)
        {
            break;
        }
        cout << a << " ";
    }

    return 0;
}
