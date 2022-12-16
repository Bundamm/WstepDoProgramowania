// Cwiczenia10.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int dodawaniedo(int arg) {
	int sum = 0;
	for (int i = 0; i <= arg; i++) {
		sum += i;
	}
	return sum;
}

int ileZgodnych(int tablica1[], int tablica2[], int rozmiar) {
	int counter = 0;
	for (int i = 0; i < rozmiar; i++) {
		if (tablica1[i] == tablica2[i]) {

			counter++;	

		}
	}
	return counter;

}




int main(){
	srand(time(NULL));
	/*
	int n;
	cout << "Podaj liczbe: ";
	cin >> n;
	int wynik = dodawaniedo(n);
	cout << endl << "The sum of all results is: " << wynik << endl;
	*/
	
	int tab1[10];
	int tab2[10];
	int size = sizeof(tab1) / 4;
	for (int i = 0; i < size; i++) {
		tab1[i] = rand() % 4;
		tab2[i] = rand() % 4;
		if(tab1[i] == tab2[i])
			cout << tab1[i] << ", " << tab2[i] << endl;
	}
	int wynik = ileZgodnych(tab1, tab2, size);
	cout << endl << wynik << endl;
	

}

