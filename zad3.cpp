#include <iostream>
using namespace std;

int main() {
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
        cout << "Ile godzin w przod?" << endl;
        cin >> przod;
        int po = (przod % 12) + hour;
        int ostateczny = po - 12;
        if (time.compare(am) == 0) {
            if(po > 12) {
                cout << ostateczny << " pm" << endl;
            } else {
                cout << po << " am" << endl;
            }
        }
        else if (time.compare(pm) == 0) {
            if(po > 12) {
                cout << ostateczny << " am" << endl;
            } else {
                cout << po << " pm" << endl;
            }
        }

    }
}

