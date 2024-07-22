//Wyświetl liczby całkowite od 100 do 10 włącznie, pomijając liczby podzielne przez 7.

#include <iostream>
using namespace std;

//check if number is dividable by 7
bool dividableBySeven(int n)
{
    if (n % 7 == 0)
    {
        return true;
    }
    else return false;
    
}


int main(){
    for (int i = 100; i >= 10; i--)
    {
        if (dividableBySeven(i))
        {
            cout<<""; //i'm sure there's a better solution than this, but it works so, meh...
        }
        else
        {
            cout<<i<<endl;
        }
    }
    



    return 0;
}