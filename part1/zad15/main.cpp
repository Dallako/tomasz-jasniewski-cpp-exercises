//Guess the pattern of a sequence and then display its 100 elements.
//Start of sequence: [1,2,2,3,3,3,4,4,4,4]

#include <iostream>
#include <array>
#include <algorithm>    //to use "for_each()" to print out full array

using namespace std;

int main(){
    //create an array
    array<size_t, 100> sequence = {1,2,2,3,3,3,4,4,4,4}; //0-9

    //do it more manually since i can't find a solution to automate the entirelity of this
    int nextNumber = 5;
    int nextIndex = 10;
    int oldIndex = 10;
    while (nextIndex<100)
    {
        sequence.at(nextIndex) = nextNumber;
        nextIndex++;
        if (nextIndex==oldIndex+nextNumber)
        {
            oldIndex=nextIndex;
            nextNumber++;
        }
    }
    
    //display an array
    cout<<"A full sequence would be: \n";
    for_each(sequence.begin(), sequence.end(), [](size_t x)
        {
            cout<<x<<' ';
        }
    );

return 0;
}