//Pobierz liczbę całkowitą z klawiatury, i wykonaj na niej poniższe operacje: jeśli liczba była ujemna, zmniejsz ją o 1. Jeżeli była dodatnia, zwiększ ją o 1. Jeżeli liczba była równa zeru, pozostaw bez zmian; Wyświetl liczbę po zmianach. Następnie określ parzystość liczby po zmianach i wyświetl informacje na ten temat (tak/nie).

#include <iostream>
using namespace std;

int main(){
    //creating a variable and take input form user
    int number;
    cout<<"Please input your number: ";
    cin>>number;

    if (number<0)
    {
        number--;
    }
    else if (number>0)
    {
        number++;
    }

    cout<<"Your number after changes: "<<number<<endl;

    if (number%2==0)
    {
        cout<<"Your number "<<number<<" is even";
    }
    else cout<<"Your number "<<number<<" is not even";
    
    


    return 0;
}