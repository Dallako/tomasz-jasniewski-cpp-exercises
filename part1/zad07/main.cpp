//Pobieraj znaki z klawiatury do czasu pobrania znaku x. Ile znaków pobrano?
#include <iostream>
using namespace std;

int main(){
    char znak;
    unsigned int charactersInputted = 0;
    while (znak != 'x')
    {
        cin>>znak;
        charactersInputted++;
    }
    cout<<"\'x\' inputted. Total characters inputted: ";
    cout<<charactersInputted;

return 0;
}