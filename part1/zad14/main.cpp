//Guess the pattern of a sequence and then display its 100 elements.
//Start of sequence: [3,1,2,1,3,1,2,1]

#include <iostream>
#include <array>
#include <algorithm>    //to use "for_each()"

using namespace std;

int main(){
    //create an array 
    array<size_t, 100> sequence = {3,1,2,1,3,1,2,1}; //0-7 
    
    //3 loops that will fill the array with correct numbers
    for (int i = 8; i <100; i+=4)
    {
        sequence.at(i) = 3;
    }

    for (int i = 9; i<100; i+=2)
    {
        sequence.at(i) = 1;
    }

    for (int i = 10; i <100; i+=4)
    {
        sequence.at(i) = 2;
    }   
    
    //displaying the full array
    cout<<"A full sequence would be: \n";
    for_each(sequence.begin(), sequence.end(), [](size_t x)
        {
            cout<<x<<' ';
        }
    );  //I found this in array documentation
        //i was trying to use for and while loops
        //but it said get<i>(sequence) had over 25 overloads and it just wouldn't compile
        //seems like im getting better in reading documentations
    

    return 0;
}