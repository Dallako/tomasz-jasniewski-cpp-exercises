//Display integers from 1 to 120, excluding numbers dividable by both 11 and 5.
//Display information how many numbers was displayed, and how many was skipped.

#include <iostream>
using namespace std;

//is dividable by both 11 and 5
bool dividableBy11And5(int n)
{
    if (n%11==0 && n%5==0)
    {
        return true;
    }
    else return false;
}

int main(){
    short skipped=0;
    short displayed=0;

    for (short i = 1; i <= 120; i++)
    {
        if (!dividableBy11And5(i))
        {
            cout<<i<<endl;
            displayed++;
        }
        else skipped++;
    }
    
    cout<<"\nNumber of displayed integers: "<<displayed<<endl;
    cout<<"\nNumber of skipped integers: "<<skipped<<endl;


return 0;
}