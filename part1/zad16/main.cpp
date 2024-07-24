//Guess the pattern of a sequence and then display its 100 elements.
//Start of sequence: [100, 99, 97, 94, 90, 85]

#include <iostream>
using namespace std;

int main(){
    int howMuch = 1;
    int n = 100;
    while (howMuch <= 100)
    {
        cout<<n<<' ';
        n -= howMuch++;
    }
//i can't believe solution was this simple
//i honestly had to check the answer in the book
//but i promise i will get back to this exercise
//and make the next task (it's also guess the pattern and display 100 elements)
return 0;
}