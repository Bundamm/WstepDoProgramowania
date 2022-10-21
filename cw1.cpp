// WDPISI6TS.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

//float x = 5.23;
//int a = 0;
//char b = 's';

//int main() {
	//float x;
	//x = 22.0f / 4.0f;
	//cout << x;
	//int x = 5;
	//char a = 'a';
	//cout << x + a; //Wynik to 102 bo każda litera ma przypisaną liczbę 
//}

/*int main() {
	//int x;
	//x = 21 % 4;
	//cout << x; //Wynik 1 bo to reszta z dzielenia

	int a, b; // Wypisz tylko liczby dodatnie,
			  // Inaczej pokaż informacje:
			  //"Wpisana wartość jest ujemna!"
	cout << "Please, insert only positive values:" << endl;
	cin >> a >> b;
	if (a < 0 or b < 0) {
		cout << "Inserted values are negative, try again.";
	}
	else {
		int c = a + b;
		cout << "The sum of inserted values is: " << c;
	}
	
}
*/

//1

/*int main() {
	double x, y;
	x = 5.64;
	y = 5.34;
	double suma = x + y;
	cout << "Wynik sumy x i y jest rowny: " << suma;
}
*/

//2
/*
int main() {
	
	int a = 12;
	int b = 15;
	int c;

	c = a;
	a = b;
	b = c;
	
	cout << "a: " << a << '\n' << "b: " << b;
	

}
*/

//3

/*
int main() {
	cout << "Wpisz temperature w Kelwinach: ";
	double K, C;
	cin >> K;

	C = -272.15 + K;

	cout << "Temperatura w Celsjuszach to: " << C << "C";


}
*/

//4
/*
int main() {
	int a;
	int b;
	cout << "Wpisz dzielna: ";
	cin >> a;
	cout << "Wpisz dzielnik: ";
	cin >> b;
	int wyn = a / b;
	int mod = a % b;
	cout << "Wynik dzielenia to: " << wyn << '\n' << "Reszta z dzielenia to: " << mod;
}
*/

//5
int main() {
	int a;
	cout << "Podaj liczbe: ";
	cin >> a;

	if (a < 2) {
		return 0;
	}
	for (int i = 2; i <= a; ++i) {
		if (a % i == 0) {
			cout << "Nie jest liczba pierwsza.";
			return 0;
		}
		else {
			
			cout << "Jest liczba pierwsza.";
			return 0;
		}
	}
}

//6
/*
int main() {
	cout << "Wpisz liczbe parzysta";
	int a;
	cin >> a;
	if (a % 2 == 0) {
		cout << "liczba jest parzysta";
	}
	else {
		cout << "liczba nie jest parzysta";
	}
}
*/
