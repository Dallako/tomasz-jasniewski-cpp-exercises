//1 integer, check if even

#include <iostream>
using namespace std;

int main(){

int yourNumber;
cout<<"Please insert your number: ";
cin>>yourNumber;
bool isNumberEven = false;
if (yourNumber % 2)
{
    isNumberEven = true;
}
else isNumberEven = false;

if (!isNumberEven)
{
    cout<<"Your number is even";
}
else cout<<"Your number is NOT even";


return 0;
};