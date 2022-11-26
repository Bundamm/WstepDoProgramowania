#include <iostream>
using namespace std;

void zad0(int arg[]) {
    for (int i = 0; i < 2; i++)
        cout << arg[i] << " ";
}

int zad1(int arg[], int size) {
    int wyn = 0;
    for (int j = 0; j < size; j++) 
        wyn += arg[j];    
    return wyn;
    
    
}

int zad2(int arg[], int size) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (arg[i] % 2 == 0) {
            counter++;
        }
    }
    return counter;
}

int zad3(int arg[], int size) {
    int poprz = arg[0];
    for (int i = 0; i < size; i++) {
        if (arg[i] > poprz) {
            poprz = arg[i];
        }
    }
    return poprz;
}

void zad4(int arg1[], int arg2[], int arg3[], int size) {
    for (int i = 0; i < size; i++) {
        if (arg1[i] == arg2[i] && arg1[i] == arg3[i]) {
            cout << "3 tablice maja taka sama wartosc w indeksie: " << i << endl;
        }
        else if (arg1[i] == arg2[i] || arg1[i] == arg3[i] || arg2[i] == arg3[i]) {
            cout << "2 tablice maja taka sama wartosc w indeksie: " << i << endl;
        }
        else {
            cout << "Zadna tablica nie ma takich samych wartosci w indeksie: " << i << endl;
        }
    }
}

int main()
{
    //int tablica[2] = { 2, 3 };
    //zad0(tablica);
    
    
    
    srand(time(NULL));
    int tab[20];
    int tab2[20];
    int tab3[20];

    int size = sizeof(tab) / sizeof(int);
    /*
    for (int i = 0; i < size; i++) {
        tab[i] = rand() % 101;
        cout << tab[i] << " ";
    }
    */

    for (int j = 0; j < size; j++) {
        
        tab[j] = rand() % 4;
        tab2[j] = rand() % 4;
        tab3[j] = rand() % 4;
        
        cout << tab[j] << " " << tab2[j] << " " << tab3[j] << endl;
    }
    cout << endl;

    //zad 1

    //int suma = zad1(tab, size);
    //cout << suma << endl; 
    
    //zad 2

    //int sumapar = zad2(tab, size);
    //cout << sumapar << endl;

    //zad 3
 
    //int najwliczba = zad3(tab, size);
    //cout << najwliczba << endl;

    //zad 4
    zad4(tab, tab2, tab3, size);


}

