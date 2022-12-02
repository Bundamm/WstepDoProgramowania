
#include <iostream>
using namespace std;
/*
int zad5a(string b) {
	int counter = 0;
	for (int i = 0; i < b.length(); i++) {
		if (b[i] >= 'a' and b[i] <= 'z') {
			counter++;
		}
	}
	return counter;
}

int zad5b(string b) {
	int counter = 0;
	for (int i = 0; i < b.length(); i++) {
		if (!(b[i] >= 'a' and b[i] <= 'z') and !(b[i] >= 'A' and b[i] <= 'Z')) {
			counter++;
		}
	}
	return counter;
}*/

/*
int secondToMax(int arg[], int size) {
	int largest = arg[0];
	int seclargest = arg[0];
	if (arg[1] > arg[0]) {
		largest = arg[1];
		seclargest = arg[0];
	}
	else {
		seclargest = arg[0];
		largest = arg[1];
	}
	for (int i = 0; i < size; i++) {
		if (largest < arg[i]) {
			seclargest = largest;
			largest = arg[i];
		} 
		else if (arg[i] > seclargest && arg[i] < largest) {
			seclargest = arg[i];
		}
	}

	return seclargest;
	
}
*/

/*
string reversedText(string arg) {
	int n = arg.length();
	string result = arg;
	for (int i = 0; i < n; i++) {
		result[i] = arg[n - i -1];
	}
	return result;
}
*/

/*
int gcd(int a, int b) {
	int res;
	if (b > a) {
		int temp = b;
		b = a;
		a = temp;
	}
	for (int i = 1; i < b; ++i) {
		if (a % i == 0 && b % i == 0) {
			res = i;
		}
	}
	return res;
}
*/

void randomNumbers() {
	int count5 = 0, count1 = 0, result = 0;
	srand(time(NULL));
	while (count5 < 3 or count1 < 2) {
		result = rand() % 11 - 5;
		if (result == 5) {
			count5++;
			cout << result << " ";
		}
		else if (result == 1) {
			count1++;
			cout << result << " ";
		}
	}
}

int main() {
	//zad 0
	/*
	string a;
	cout << "Wprowadz ciag znakow: ";
	cin >> a;
	cout << endl;
	int result_a = zad5a(a);
	int result_b = zad5b(a);
	*/

	//zad 1
	/*
	srand(time(NULL));
	int tab[20];
	int size = sizeof(tab) / sizeof(int);
	for (int i = 0; i < size; i++) {
		tab[i] = rand() % 101;
		cout << tab[i] << " ";
	}
	cout << endl;*/
	//int wynik1 = secondToMax(tab, size);
	//cout << "Drugi najwiekszy wynik to: " << wynik1 << endl;


	//zad 2
	/*
	string a;
	cout << "Wprowadz napis: ";
	cin >> a;
	cout << endl;
	string result = reversedText(a);
	cout << "Odwrocony napis: " << result;
	*/

	//zad 3 
	//int a;
	//int b;
	//cout << "Input two integers: ";
	//cin >> a;
	//cout << " ";
	//cin >> b;
	//int result = gcd(a, b);
	//cout << "The greatest common divisor of" << a << " and " << b << " is: " << result;

	//zad 4 
	randomNumbers();

}

