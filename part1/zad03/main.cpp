//pobierz liczbę całkiwitą z klatiarury, sprawdź czy jest podzielna przez:
//1.) zarówno 3 jak i 5
//2.) przez 3, ale nie przez 5
//3.) przez 5, ale nie przez 3
//4.) ani nie przez 3, ani nie przez 5
//prawidłową odpowiedź wypisz na ekranie

#include <iostream>
using namespace std;

int main(){

    //inserting a number
    int aNumber;
    cout<<"Please insert your desired number: ";
    cin>>aNumber;

    //create a variable to hold ID number for switch expression
    int id;

    //check if dividable by 3 and 5
    if (aNumber % 3 == 0 && aNumber % 5 ==0)
    {
        //id = 1;
        cout<<"Your number is dividable by both 3 and 5."<<endl;
    }
    //check if dividable by 3 only
    if (aNumber % 3==0 and aNumber % 5 !=0)
    {
        //id = 2;
        cout<<"Your number is dividable by 3 only."<<endl;
    }
    //check if dividable by 5 only
    if (aNumber % 5 ==0 and aNumber % 3 !=0)
    {
        //id = 3;
        cout<<"Your number is dividable by 5 only."<<endl;
    }
    //check if it's not dividable by neither 3 nor 5
    if (aNumber % 3 != 0 and aNumber%5 != 0)
    {
        //id = 4;
        cout<<"Your number is not dividable by niether 3 nor 5."<<endl;
    }
    
    /*switch (id)
    {
    case 1:
        cout<<"Your number is dividable by both 3 and 5."<<endl;
        break;
    case 2:
        cout<<"Your number is dividable by 3 only."<<endl;
        break;
    case 3:
        cout<<"Your number is dividable by 5 only."<<endl;
        break;
    case 4:
        cout<<"Your number is not dividable by neither 3 nor 5."<<endl;
        break;
    
    default:
        cout<<"Error!"<<endl;
        break;
    }*/
    
//  debug / testing
//    cout<<aNumber<<endl;
//    cout<<id<<endl;

// I left the broken code commented on purpose instead of deleting it, hoping one day
// i will look back at it and think "what the fuck was I trying to do"

    return 0;
}