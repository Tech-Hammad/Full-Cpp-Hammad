// Structures, Unions & Enums in C++

#include <iostream>
using namespace std;

typedef struct players
{
    int num;
    char favChar;
    float score;
} pl;

int main(){

    // struct players Hammad;
    pl Hammad;  // typedef lga k player ki jgha sirf ep b likh skty hain
    Hammad.num=20;
    Hammad.favChar='a';
    Hammad.score=169;

    cout<<"Fav Number of daniyal is "<<Hammad.num<<endl;
    cout<<"FavChar of daniyal is "<<Hammad.favChar<<endl;
    cout<<"Score of daniyal is "<<Hammad.score<<endl;

    return 0;
}
