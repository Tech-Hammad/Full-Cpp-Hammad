#include <iostream>
using namespace std;

class Cricket
{
public:
    virtual void display() = 0; // now this is pure virtual func we have to override it in derived classes also called do-nothing function
};

class Batting : public Cricket
{
    int runs;

public:
    void setBat(int r)
    {
        runs = r;
    }
    void display() override
    {
        cout << "Pakistan scored " << runs << " runs" << endl;
    }
};

class Bowling : public Cricket
{
    int wickets;

public:
    void setBall(int w)
    {
        wickets = w;
    }
    void display() override
    {
        cout << "Pakistan took " << wickets << " wickets" << endl;
    }
};

int main()
{
    Cricket *cricPtr[2];

    Batting batObj;
    Bowling ballObj;

    cricPtr[0] = &batObj;
    batObj.setBat(56);
    cricPtr[0]->display();

    cricPtr[1] = &ballObj;
    ballObj.setBall(6);
    cricPtr[1]->display();
    return 0;
}

/* In C++, an abstract class is a class that cannot be initiated directly and is designed to be a base class for other classes. An abstract class typically includes at least one pure virtual function.

Pure Virtual Function
A pure virtual function is a function that is declared in a base class but is meant to be overridden in derived classes. A pure virtual function has no implementation in the base class and is specified by assigning 0 to the function declaration.*/
