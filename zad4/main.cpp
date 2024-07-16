//pobierz znak (char) z klawiatury. sprawdź czy to spółgłoska, samogłoska czy cyfra.
//poinformuj jaki to znak, uwzględnij tylko małe litery angielskiego alfabetu i cyfry.

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){
    //creating variable and asking user for input
    char character;
    cout<<"Please insert your character: ";
    cin>>character;

    //create array with consonants
    array<char, 21> consonants = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    //create array with vowels
    array<char, 5> vowels = {'a', 'e', 'i', 'o', 'u'};
    //create array with digits
    array<char, 10> digits = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    //compare character to arrays
    
        find (digits.begin(), digits.end(), character) != digits.end()
            ? cout<<"Your character is a digit.\n"  //says this if condition==true
            : cout<<"Your character is NOT  a digit.\n";     //says this if condition==false
        find (vowels.begin(), vowels.end(), character) != vowels.end()
            ? cout<<"Your character is a vowel.\n"
            : cout<<"Your character is NOT a vowel.\n";
        find (consonants.begin(), consonants.end(), character) != consonants.end()
            ? cout<<"Your character is a consonant.\n"
            : cout<<"Your character is NOT a consonant.\n";
        cout<<character<<endl;


/* example find() function from documentation:

int main()
{
    const auto v = {1, 2, 3, 4};
 
    for (const int n : {3, 5})
        (std::find(v.begin(), v.end(), n) == std::end(v))
            ? std::cout << "v does not contain " << n << '\n'
            : std::cout << "v contains " << n << '\n';
*/
    return 0;
}