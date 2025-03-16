// Structures, Unions & Enums in C++
#include <iostream>
using namespace std;

typedef struct players
{
    int num;
    char favChar;
    float score;
} pl;

int main()
{
    // Struct players Hammad;
    pl Hammad;  // By Applying typedef we will use pl as Object instead of Players
    Hammad.num=20;
    Hammad.favChar='a';
    Hammad.score=169;

    cout<<"Fav Number of Hammad is "<<Hammad.num<<endl;
    cout<<"FavChar of Hammad is "<<Hammad.favChar<<endl;
    cout<<"Score of Hammad is "<<Hammad.score<<endl;

    return 0;
}
