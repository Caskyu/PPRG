#include <iostream>
#include <vector>
using namespace std;

int obliczWspolczynnik(int n, int k) {
    int wynik = 1;
    for (int i = 0; i < k; ++i) {
        wynik = wynik * (n - i) / (i + 1);
    }
    return wynik;
}

int main() {
    int liczbaWierszy;

    cout << "Podaj liczbe wierszy trojkata Pascala: ";
    cin >> liczbaWierszy;

    for (int n = 0; n < liczbaWierszy; ++n) {
        for (int spacja = 0; spacja < liczbaWierszy - n - 1; ++spacja) {
            cout << " ";
        }
        for (int k = 0; k <= n; ++k) {
            cout << obliczWspolczynnik(n, k) << " ";
        }
        cout << endl;
    }

    return 0;
}
