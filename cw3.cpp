// lab04.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
	// Sprawdzamy czy liczba jest pierwsza
	/*int n;
	bool isPrime = true;
	cout << "Enter a number: " << endl;
	cin >> n;
	if (n <= 1) {
		cout << n << " is not a prime number." << endl;
	}
	else {
		for (int i = 2; i <= n / 2; i++) {
			if (n % i == 0)
				isPrime = false;
		}
	}
	if (isPrime)
		cout << n << " is a prime number." << endl;
	else
		cout << n << " is not a prime number." << endl;
	*/

	//zad 1
	/*
	int n = 50;
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0 && i <= 50)
			cout << i << ", ";	
	}
	while (n <= 100) {
		
		if (n <= 96) {
			cout << n + 2 << ", ";
		}
		else if(n == 100) {
			cout << n;
		}
		n = n + 2;
		
		
	}
	*/
	//zad 2
	/*
	int n, i = 2;
	cout << "Podaj liczbe: ";
	cin >> n;
	if (n == 0 || n == 1) {
		cout << 1 << endl;
	}
	else if (n > 1) {
		for (int wynik = 1; i <= n; i++) {
			wynik = wynik * i;
			if (n == i) {
				cout << "\n rozwiozanie: " << n << "! = " << wynik;
			}
		}
	}
	*/
	/*
	
	// zad 2
	 
	long long silnia = 1;
	int n;
	cout << "Podaj liczbe: ";
	cin >> n;
	if (n == 0 || n == 1) {
		cout << 1 << endl;
	}
	else {
		for (int i = 1; i <= n; i++)
			silnia = silnia * i;
		cout << n << "! = " << silnia << endl;
	}
	*/

	// zad 3


}

