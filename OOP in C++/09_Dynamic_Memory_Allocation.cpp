#include <iostream>
using namespace std;

class Shop
{
    int count;
    int itemId[100];
    int itemPrice[100];

public:
    Shop() { count = 0; } // Constructor to initialize count

    void inputVal()
    {
        cout << "Enter id of item num: " << (count + 1) << endl;
        cin >> itemId[count];
        cout << "Enter price of item num: " << (count + 1) << endl;
        cin >> itemPrice[count];
        count++;
    }

    void displayVal()
    {
        for (int i = 0; i < count; i++)
        {
            cout << "Price of item with id: " << itemId[i] << " is Rs: " << itemPrice[i] << endl;
        }
    }
};

int main()
{
    Shop Cart;
    Cart.inputVal();
    Cart.inputVal();
    Cart.inputVal();
    Cart.displayVal();

    return 0;
}
