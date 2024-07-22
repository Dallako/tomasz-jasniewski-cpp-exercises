//Guess the pattern of a sequence and then display its 100 elements.
//Start of sequence: [100, 99, 97, 94, 90, 85]

#include <iostream>
#include <array>
#include <algorithm>    //to use "for_each()" to print out full array
using namespace std;

int main(){
    //create an array
    array<size_t, 100> theSequence = {100, 99, 97, 94, 90, 85}; //0-5

    //here put the solution
    

    //print out array
    for_each(theSequence.begin(), theSequence.end(), [] (size_t x)
        {
            cout<<x<<' ';
        }
    );

return 0;
}