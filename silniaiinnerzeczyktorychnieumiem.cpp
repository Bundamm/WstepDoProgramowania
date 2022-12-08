// silnia i inne rzeczy ktorych nie umiem.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
/*
void zad4a(int arg[], int arg2[], int arg3[], int size) {
    cout << "Dwie tablice maja taka sama wartosc na indeksie: ";
    for (int i = 0; i < size; i++) {
        if (arg[i] == arg2[i] || arg2[i] == arg3[i] || arg[i] == arg3[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}
void zad4b(int arg[], int arg2[], int arg3[], int size) {
    cout << "Trzy tablice maja taka sama wartosc na indeksie: ";

    for (int i = 0; i < size; i++) {
        if (arg[i] == arg2[i] && arg2[i] == arg3[i]) {
            cout << i << " ";
        }
        
    }
    cout << endl;
}
void zad4c(int arg[], int arg2[], int arg3[], int size) {
    cout << "Tablice nie maja wspolnych wartosci na indeksach: ";
    for (int i = 0; i < size; i++) {
        if (!(arg[i] == arg2[i] || arg2[i] == arg3[i] || arg[i] == arg3[i])) {
            cout << i << " ";
        }
    }
    cout << endl;
}
*/
void flamaster(string arg) {
    int counter = 0;
    char prev = arg[0];
    int n = arg.length();
    for (int i = 0; i < n; i++) {
        if (arg[i] == prev) {
            counter++;
        }
        else if (counter <= 2) {
            if (counter == 1) {
                cout << prev;
                counter = 1;
                prev = arg[i];
            }
            else if (counter == 2) {
                cout << prev << prev;
                counter = 1;
                prev = arg[i];
            }
        }
        else if (counter > 2) {
            cout << prev << counter;
            prev = arg[i];
            counter = 1;
        }
    }
    if (counter <= 2) {
        switch (counter) {
        case 1:
            cout << prev;
            break;
        case 2:
            cout << prev << prev;
            break;
        }
    }
    else {
        cout << prev << counter;
    }

}

int stm(int arg[], int size) {
    int max = arg[0], secmax = arg[0];
    /*
    if (arg[0] > arg[1]) secmax = arg[1];
    else secmax = arg[0];
    for (int i = 0; i < size; i++) {
        if (arg[i] > max) {
            secmax = max;
            max = arg[i];
        }
        else if (arg[i] > secmax && arg[i] < max) {
            secmax = arg[i];
        }
    }
    */
    for (int i = 0; i < size; i++) {
        if (arg[i] > max) {
            max = arg[i];
        }
    }
    for (int i = 0; i < size; i++) {
        if (arg[i] != max) {
            if (arg[i] > secmax) {
                secmax = arg[i];
            }
        }
    }
    return secmax;
}
/*
int revtext(string text) {

}
*/
int calc(char znak, int a, int b) {
    switch (znak) {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    }
}

int get_sum(int a, int b)
{
    int sum = 0;
    if (a == b) {
        return a;
    }
    if (b > a) {
        for (b; b >= a; b--) {
            sum += b;
        }
    }
    else {
        for (a; a >= b; a--) {
            sum += a;  
        }
    }
    return sum;
}

void fib(int a) {
    int i = 0;
    int curr = 1, prev = 0, sum = 0;
    while (i < a) {
        cout << prev << " "; // 0, 1
        sum = curr + prev; // 1 + 0, 1 + 1, 2 + 1
        prev = curr; // 0 => 1, 1 => 1, 1 => 2
        curr = sum; // 1 => 1, 1 => 2, 2 => 3 itd
        i++;
    }
}


void arandomNumbers() {
    int piec3 = 0, jeden2 = 0;
    while (piec3 < 3 || jeden2 < 2) {
        int result = rand() % 11 - 5;
        if (result == 5) {
            piec3++;
            cout << result << " ";
        }
        else if(result == 1) {
            jeden2++;
            cout << result << " ";
        }
    }
}

void brandomNumbers() {
    int piec3 = 0, jeden2 = 0;
    while (piec3 < 3 || jeden2 < 2) {
        int result = rand() % 11 - 5;
        if (result == 5) {
            if (piec3 == 3) continue;
            else {
                piec3++;
                cout << result << " ";
            }
        }
        if (result == 1) {
            if (jeden2 == 2) continue;
            else {
                jeden2++;
                cout << result << " ";
            }
        }
    }   
}
int ble(int arg[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arg[i];
    }
    return sum;
}

bool boolio(string arg) {
    int counterx = 0, countero = 0;
    for (int i = 0; i < arg.length(); i++) {
        if (arg[i] == 'x' or arg[i] == 'X') {
            counterx++;
        }
        else if (arg[i] == 'o' or arg[i] == 'O') {
            countero++;
        }
        
    }
    if (countero == counterx or (countero == 0 and counterx == 0)) return true;
    else return false;
}

bool is_isogram(string str) {
    int counter = 0;
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j) continue;
            if (str[i] == str[j]) {
                counter++;
            }
        }
    }
    if (counter != 0) return false;
    else return true;

}



int main(){
    srand(time(NULL));

    /*
    int tab[20];
    int size = sizeof(tab) / 4;
    for (int i = 0; i < size; i++) {
        tab[i] = rand() % 101;
        cout << tab[i] << " ";
    }
    int wynik = stm(tab, size);
    cout << endl << wynik;
    */
    /*
    int n;
    cout << "podaj liczbe nieujemna: ";
    cin >> n;
    if (n < 0)
        cout << "tak nie wolno gluptasie";
    else {
        long long wynik = 1;
        for (int i = 1; i <= n; i++) {
            wynik = wynik * i;
        }
        cout << endl << "silnia: " << wynik;
    }
    */
    /*
    int n, i = 0;
    cout << "Podaj liczbe: ";
    cin >> n;
    int prev = 0, curr = 1, wynik = 0;
    while (i < n) {
        cout << prev << " ";
        wynik = curr + prev; // wynik  = 1 wynik = 1 
        prev = curr; // prev = 1 prev = 1
        curr = wynik; // curr = 1 curr = 2
        i++;
    }
    cout << endl;
    */
    /*
    int tab[20];
    int tab2[20];
    int tab3[20];
    int size = sizeof(tab) / 4;
    for (int i = 0; i < size; i++) {
        tab[i] = rand() % 4;
        tab2[i] = rand() % 4;
        tab3[i] = rand() % 4;
        cout << tab[i] << " " << tab2[i] << " " << tab3[i] << endl;
    }
    zad4a(tab, tab2, tab3, size);
    zad4b(tab, tab2, tab3, size);
    zad4c(tab, tab2, tab3, size);
    */
    /*
    int n, i = 1;
    long long int wynik = 1;
    cout << "dej lyczbe: ";
    cin >> n;
    cout << endl;
    if (n < 0)
        cout << "Nie wolno gluptasku oj oj" << endl;
    else if (n == 0)
        cout << 1 << endl;
    else {
        while (i <= n) {
            wynik *= i;
            i++;
        }
        cout << "Silnia z " << n << " wynosi: " << wynik << endl;
    }
    */
    /*
    int n;
    int wynik = 1;
    cout << "daj liczbe" << endl;
    cin >> n;
    cout << endl;
    if (n == 0)
        cout << 1;
    else if (n < 0)
        cout << "fuck off";
    else {
        while (n > 0) {
            
            wynik *= n; // wynik = 1 * 4 wynik = 4 * 3 wynik = 12 * 2 wynik = 24 * 1
            n--;
        }
        cout << wynik;
    }
    */
    /*
    string lmao = "abab";
    string res = "";
    for (int i = lmao.length(); i >= 0; i--) {
        res = res + lmao[i];
    }
    cout << res;
    */
    /*
    string arg = "bvasd";
    int n = arg.length();
    string result = arg;
    for (int i = 0; i < arg.length(); i++) {
        result[i] = arg[n - i - 1];
    }
    cout << result;
    */

    /*
    int a, b, temp;
    double odp = 1;
    cout << "Podaj a i b: ";
    cin >> a >> b;
    temp = a;
    for (int i = 1; i < b; i++) {
       odp = a *= temp;
    }

    cout << endl << odp;
    return 0;
    */
    
    
    /*
    string ble = "ABBCCCDDDDEEEEEFGGHIIJKKKL";
    flamaster(ble);
    */
    /*
    char znak;
    int a, b;
    cout << "podaj znak i liczby: ";
    cin >> znak;
    cin >> a >> b;
    cout << endl;
    int wynik = calc(znak, a, b);
    cout << wynik << endl;
    */


    /*arandomNumbers();
    cout << endl;*/

    brandomNumbers();

    //int wyn = get_sum(5, -1);
    //cout << endl << wyn << endl;
    //int wyn = get_sum(-1, 5);
    /*
    cout << "Wpisz liczbe: ";
    int liczba;
    cin >> liczba;
    fib(liczba);
    
    */
    /*
    int tab[20];
    int size = sizeof(tab) / 4;
    for (int i = 0; i < size; i++) {
        tab[i] = (rand() % 31) + 10;
        cout << tab[i] << " ";
    }
    int wyn = ble(tab,size);
    cout << endl << "Wynik dodawania: " << wyn;
    */
    /*
    string x = "fjslakdfn aslojifjaois   askjd";
    string wyn = "";
    for (int i = 0; i < x.length(); i++) {
        if (x[i] == ' ') {
            continue;
        }
        else {
            wyn += x[i];
        }
    }
    cout << wyn << endl;
    */
    /*
    string str = "xxooxoX";
    bool ble = boolio(str);
    cout << ble << endl;
    */
    /*
    string str = "moose";
    bool ble = is_isogram(str);
    cout << ble << endl;


    return 0;
    */
}
 