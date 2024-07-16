//pobierz znak (char) z klawiatury. sprawdź czy to spółgłoska, samogłoska czy cyfra.
//poinformuj jaki to znak, uwzględnij tylko małe litery angielskiego alfabetu i cyfry.

#include <iostream>
#include <array>
using namespace std;

int main(){
    //creating variable and asking user for input
    char character;
    cin>>character;

    //create array with consonants
    array<char, 21> consonants = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    //create array with vowels
    array<char, 5> vowels = {'a', 'e', 'i', 'o', 'u'};
    //create array with digits
    array<char, 10> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


    return 0;
}