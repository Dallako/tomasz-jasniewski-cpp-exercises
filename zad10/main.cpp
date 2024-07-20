//Wyświetl liczby całkowite od 1 do 100. Spróbuj zrobić to wykorzystując różne pętle (for, while, do...while).

#include <iostream>
using namespace std;

int main(){
    cout<<"\"for\" loop:"<<endl;
    for (int i = 1; i <= 100; i++)
    {
        cout<<i<<endl;
    }
    
    int iterator = 1;
    cout<<"\"while\" loop:"<<endl;
    while (iterator<=100)
    {
       cout<<iterator<<endl;
       iterator++;
    }
    
    iterator = 1;
    cout<<"\"do...while\" loop:"<<endl;
    do
    {
        cout<<iterator<<endl;
       iterator++;
    } while (iterator<=100);
    


    return 0;
}