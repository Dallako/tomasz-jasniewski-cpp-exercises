//pobierz 5 liczb z klawiatury i wyświetl informacje ile z nich było parzystych, a ile nieparzystych

#include <iostream>
using namespace std;

//apparentely this bool has to be outside main function
bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else return false;
    
}

int main(){
    //create variables and take input
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    unsigned short scoreEven = 0;
    unsigned short scoreUneven = 0;

    //cout if number is even and add to score
    if (isEven(a))
    {
        cout<<"1st number is even\n";
        scoreEven++;
    }
    else
    {
        cout<<"1st number is uneven\n";
        scoreUneven++;
    }

    if (isEven(b))
    {
        cout<<"2nd number is even\n";
        scoreEven++;
    }
    else
    {
        cout<<"2nd number is uneven\n";
        scoreUneven++;
    }

    if (isEven(c))
    {
        cout<<"3rd number is even\n";
        scoreEven++;
    }
    else
    {
        cout<<"3rd number is uneven\n";
        scoreUneven++;
    }

    if (isEven(d))
    {
        cout<<"4th number is even\n";
        scoreEven++;
    }
    else
    {
        cout<<"4th number is uneven\n";
        scoreUneven++;
    }

    if (isEven(e))
    {
        cout<<"5th number is even\n";
        scoreEven++;
    }
    else
    {
        cout<<"5th number is uneven\n";
        scoreUneven++;
    }
    
    //display both scores
    cout<<"Number of even numbers: "<<scoreEven<<endl;
    cout<<"Number of uneven numbers: "<<scoreUneven<<endl;
    return 0;
}