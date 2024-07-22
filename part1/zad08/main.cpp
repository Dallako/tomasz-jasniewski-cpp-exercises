//Pobierz z klawiatury dwie liczby float i znak działania (jeden z tych +, -, *, /).
//W zależności od znaku wykonaj na pobranych dwóch liczbach odpowiednie działanie.
//Zwróć uwagę na dzielenie przez 0!

#include <iostream>
using namespace std;

//function checking if you're not dividing by 0
bool edgeCaseHandling(int n, char k)
{
    if (n == 0 && k == '/')
    {
        return true;
    }
    else return false;
}

int main(){
    //create variables and take input
    float a, b;
    char x;
    cout<<"Please input first number: ";
    cin>>a;
    cout<<"\nPlease input second number: ";
    cin>>b;
    cout<<"\nPlease input arithmetic operator: ";
    cin>>x;

    //Edge Case Handling
    if (edgeCaseHandling(b, x))
    {
        cout<<"Detected dividing by 0!!!"<<endl;
        return 1;
    }
    
    //do math
    float result;
    
    switch (x)
    {
    case '+':
        result = a+b;
        break;
    case '-':
        result = a-b;
        break;
    case '*':
        result = a*b;
        break;
    case '/':
        result = a/b;
        break;
    default:
        cout<<"Unidentified switch error";
        return 1;
        break;
    }

    cout<<result;
return 0;
}