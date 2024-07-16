//masz takie wyrażenie: (((a1+a2)*a3)-a4)/a5 (elementy od a1 do a5 są typu float).
//Pobierz z klawiatury każdą ze zmiennych a1 do a5, oblicz wartość wyrażenia i wyświetl wynik.
//w przypadku dzielenia przez 0 informacja o błędzie i nie wykonywanie się programu.

#include <iostream>
using namespace std;

int main(){
    //create variables and take input from user
    float a1, a2, a3, a4, a5;
    cout<<"Input first value: ";
    cin>>a1;
    cout<<"Input second value: ";
    cin>>a2;
    cout<<"Input third value: ";
    cin>>a3;
    cout<<"Input fourth value: ";
    cin>>a4;
    cout<<"Input fifth value: ";
    cin>>a5;

    //do math and edge case handling
    float result;
    if (a5 == 0)
    {
        cout<<"Dividing by 0 detected. Deleting your operating system rn."<<endl;
        return 1;
    }
    else result = (((a1+a2)*a3)-a4)/a5;

    //print the results
    cout<<"Your result is: "<<result<<endl;





    return 0;
}