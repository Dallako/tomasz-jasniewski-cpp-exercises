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

    // iterate over the first vector
    for (int num : pierwszy)
    {
        // check if the number is even
        if (isEven(num)) {
            // insert at the front of the second vector if even
            drugi.insert(drugi.begin(), num);
        } else {
            // append to the end of the second vector if odd
            drugi.push_back(num);
        }
    }

    // Display both vectors
    cout << "First vector (pierwszy): ";
    for (int num : pierwszy) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Second vector (drugi, evens first): ";
    for (int num : drugi) {
        cout << num << " ";
    }
    cout << endl;
/*
ChatGPT helped me. Learn how to use : to iterate and then do this assigment again!
*/
    return 0;
}