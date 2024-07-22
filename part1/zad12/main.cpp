//Display integers from -25 up to 25, excluding 0.

#include <iostream>
using namespace std;

bool isZero(int n)
{
    if (n==0)
    {
        return true;
    }
    else return false;
    
}
int main(){
    for (int i = -25; i <= 25; i++)
    {
        if (!isZero(i))
        {
            cout<<i<<endl;
        }
        else cout<<""; //same thing as in exercise 11
    }
    
    return 0;
}