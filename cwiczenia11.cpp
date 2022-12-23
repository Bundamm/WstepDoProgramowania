#include <iostream>
using namespace std;


int sumaLiczb(int n) {
	if (n < 1) {
		cout << "\n The sum of numbers is: ";
		return 0;
	}
	cout << n << " ";
	return n + sumaLiczb(n - 1);
}
int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else if (n < 0) {
		cout << "Tak nie wolno";
		return 0;
	}
	else {
		return n * factorial(n - 1);
	}
	// 3 * factorial(3-1) = 3 * factorial(2) 
	// factorial(2) -> 2 * factorial(1)
	// factorial(1) = 1 * factorial(0) czyli 1
}

int elementCiag(int n) {
	if (n == 1) {
		return 1;
	}
	else if (n < 0) {
		cout << "Nie wolno tak!";
		return 0;
	}
	else {
		return -n * elementCiag(n - 1) + 4;
	}
}

int fib(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else if (n < 0) {
		cout << "Tak sie nie da.";
		return 0;
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}



//5
// 5 + 4 + 3 + 2 + 1

int main()
{
	/*
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int result = sumaLiczb(n);
	cout << result << endl;
	*/
	/*
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int result = factorial(n);
	cout << result << endl;
	*/
	/*
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int result = elementCiag(n);
	cout << result << endl;
	*/
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int result = fib(n);
	cout << result << endl;
}

