//Guess the pattern of a sequence and then display its 100 elements.
//Start of sequence: [6,2,8,3,10,4,12,5,14,6]

#include <iostream>
using namespace std;

int main(){
	//6 -4 + 6
	//8 -5 + 7
	//10 -6 + 8

	int start = 6;
	int decrement = 4;
	int increment = 6;


	cout<<start<<" ";
	for (int i=0;i<=100;i++)
	{
		start = start - decrement;
		decrement++;
		cout<<start<<" ";

		start = start + increment;
		increment++;
		cout<<start<<" ";
	}


    return 0;
}
