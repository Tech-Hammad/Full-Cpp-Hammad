#include <iostream>
using namespace std;

class Binary
{
private:
    char str[50];
    void checkBinary();

public:
    void readBinary();
    void onesComp();
    void displayBinary();
};

void Binary::readBinary()
{
    cout << "Enter binary number: ";
    cin >> str;
}

void Binary::checkBinary()
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            cout << "Incorrect binary form" << endl;
            return;
        }
    }
}

void Binary::onesComp()
{
    checkBinary();
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '0')
        {
            str[i] = '1';
        }
        else
        {
            str[i] = '0';
        }
    }
}

void Binary::displayBinary()
{
    cout << "Binary after ones' complement: " << str << endl;
}

int main()
{
    Binary binaryForm;
    binaryForm.readBinary();
    binaryForm.onesComp();
    binaryForm.displayBinary();
    return 0;
}
