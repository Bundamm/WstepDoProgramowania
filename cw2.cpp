#include <iostream>
using namespace std;
/*int main()
{
    // 0-100%, 50% włącznie
    int num;
    cout << "Enter a percentage (0-100) to check if you've passed." << endl;
    cin >> num;
    if (num < 0 || num > 100) {
        cout << "Wrong number.";
    }
    else {
        if (num < 50) {
            cout << "You've failed the exam!";
        }
        else {
            cout << "You've passed the exam!";
        }
    }
}*/

// zad 1
/*int main() {
    int cena_prod;
    cout << "Wpisz cenę produktu." << endl;
    cin >> cena_prod;
    cout << "Wpisz cenę sprzedaży." << endl;
    int cena_spr;
    cin >> cena_spr;
    if (cena_spr > cena_prod) {
        cout << "Zysk: " << cena_spr - cena_prod << endl;
    }
    else {
        cout << "Strata: " << cena_prod - cena_spr << endl;
    }
}*/

// zad 2
/*int main() {
    int rok;
    cout << "Podaj rok: " << endl;
    cin >> rok;
    if (rok % 4 == 0 && rok % 100 != 0) {
        cout << "Rok jest przestepny." << endl;
    }
    else if (rok % 400 == 0) {
        cout << "Rok jest przestepny." << endl;
    }
    else {
        cout << "Rok nie jest przestepny." << endl;
    }
    return 0;
}*/

// zad 3
/*int main() {
    int hour;
    cout << "Wpisz godzine: " << endl;
    cin >> hour;
    if (hour > 12 || hour < 0) {
        cout << "Wpisales zla godzine" << endl;
    }
    else {
        string time;
        int przod;
        string am = "am";
        string pm = "pm";
        cout << "am czy pm?" << endl;
        cin >> time;
        //int comp1 = am.compare(time);
        //int comp2 = pm.compare(time);
        if (time.compare(am) == 0) {
            cout << "Ile godzin w przod?" << endl;
            cin >> przod;

        }
        else if (time.compare(pm) == 0) {
            cout << "Ile godzin w przod?" << endl;
            cin >> przod;
            int suma = hour + przod;
            if (suma % 12 == 0) {
              
            }
        }
 
    }

}*/