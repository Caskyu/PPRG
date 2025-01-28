#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float x, y;

    cout << "Podaj pierwsza liczbe (x): ";
    cin >> x;
    cout << "Podaj druga liczbe (y): ";
    cin >> y;

    float suma = x + y;
    float roznica = x - y;
    float iloczyn = x * y;

    if (y != 0) {
        float iloraz = x / y;

        cout << fixed << setprecision(2);
        cout << "Suma: " << suma << endl;
        cout << "Roznica: " << roznica << endl;
        cout << "Iloczyn: " << iloczyn << endl;
        cout << "Iloraz: " << iloraz << endl;
    } else {
        cout << "Nie mozna dzielic przez zero!" << endl;
        cout << fixed << setprecision(2);
        cout << "Suma: " << suma << endl;
        cout << "Roznica: " << roznica << endl;
        cout << "Iloczyn: " << iloczyn << endl;
    }

    return 0;
}