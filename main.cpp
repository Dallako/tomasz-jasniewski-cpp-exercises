/* pobierz z klawiatury 3 nieujemne liczby całkowite, znajdź największą z nich, sumę pozostałych wyświetl tyle razy,
ile wynosi wartość największej liczby */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	//pobranie z klawiatury
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;

	//odnalezienie największej liczby
	int bigger = fmax(a,b);
	int biggest = fmax(bigger, c);

	//sumowanie pozostałych
	int suma;
	

	//debug/test
	//cout<<biggest;
};
