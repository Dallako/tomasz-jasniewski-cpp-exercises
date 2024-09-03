//Take integer input and display it's double value (x2).
//Repeat until displayed value is between 1 and 10.

#include <iostream>

int main(){
    //take input from user
    label:;
    int a = 0;
    std::cout<<"Give me an integer: ";
    std::cin>>a;

    //double it
    int b = a*2;

    //check if 'b' between 1 and 10
    if (a>=1 && a<=10)
    {
        return 0;
    }
    else goto label;
    
    return 0;
}