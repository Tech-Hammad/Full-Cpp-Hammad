// Print all Prime Numbers b/w two numbers entered by user

#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout<<"Enter Range of Two Numbers: "<<endl;
    cin >> a >> b;
    cout<<"Prime Numbers between "<<a <<"and "<<b<<" are:-"<<endl;
    for (int x = a; x <= b; x++)
    {
        int i;
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                break;
            }
        }
        if (i == x)
        {
            cout << i << ", ";
        }
    }
    return 0;
}
