//Display all integers dividable by 6 in range 1 to 1000.

#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 1000; i++)
    {
        if (i % 6 == 0)
        {
            cout<<i<<" ";
        }
        
    }
    


    return 0;
}