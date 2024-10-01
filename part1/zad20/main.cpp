//Create a vector and insert there any 10 numbers.
//Create a second vector, which, at the beggining, contains even numbers from the first vector and then the rest of numbers.
//Display both vectors.

#include <iostream>
#include <vector>
using namespace std;

//create isEven function
    bool isEven(int n)
    {
        if (n % 2 == 0)
        {
            return true;
        }
        else
            return false;

    }

int main(){
    //create two vectors
    vector<int> pierwszy = {138, 527, 999, 1110, 1488, 1819, 2024, 4201, 7722, 9075};
    vector<int> drugi;

    //check if number is even
    //if so, put it in front of second vector
    //if not, put it at the end
    
    /*
    YOU'RE HERE, USE std::for_each() and isEven() to iterate through pierwszy
    isEven = insert()
    !isEven= push_back()
    */

    return 0;
}