// laby13.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
using namespace std;


void printVector(vector<int> arg) {
	for (int i = 0; i < arg.size(); i++) {
		cout << arg.at(i) << " ";
	}
}

int onlyPositive(vector<int> arg) {
	int pos = 0;
	for (int i = 0; i < arg.size(); i++) {
		if (arg.at(i) > 0) {
			pos += arg.at(i);
		}
	}
	return pos;
}

vector<int> evenVector(vector<int> arg) {
	vector<int> parzyste;
	for (int i = 0; i < arg.size(); i++) {
		if (arg.at(i) % 2 == 0) {
			parzyste.push_back(arg.at(i));
		}
	} 
	return parzyste;
}

int main()
{
	/*
	///*std::*///vector<int> wektor (5,1); // w tym wektorze znajduje się 5 jedynek
	//vector<int> wektorr = { 1,1,1,1,1 };
	//vector<int> wektor3(wektorr);
	//wektor[0] = 4; */
	/*
	vector<int> wektor = { 1,2,3,4 };
	wektor.push_back(15); // wpycha wartość na koniec
	wektor.pop_back(); // usuwa wartość z końca
	wektor.clear(); // zeruje wektor nic w nim nie ma
	for (int i = 0; i < wektor.size(); i++) {
		cout << wektor.at(i) << " ";
	}
	*/
	
	vector<int> wektor = { -3,4,5 };
	printVector(wektor);
	vector<int> wektor2 = { 2,4,5,6,-2,-10,-4 };
	int zad2 = onlyPositive(wektor2);
	cout << endl << zad2 << endl;
	vector<int> wektor3 = { 1,2,3,4 };
	vector<int> zad3 = evenVector(wektor3);
	printVector(zad3);
	return 0;
}

