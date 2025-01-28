#include <iostream>
using namespace std;

int main() {
    int liczbaElementow;

    cout << "Podaj liczbe elementow tablicy: ";
    cin >> liczbaElementow;

    if (liczbaElementow <= 0) {
        cout << "Tablica musi miec co najmniej jeden element." << endl;
        return 1;
    }

    int tablica[100];
    cout << "Podaj " << liczbaElementow << " elementow tablicy:" << endl;

    for (int i = 0; i < liczbaElementow; ++i) {
        cin >> tablica[i];
    }

    int maksWystapienia = 0;
    int najczestszyElement = tablica[0];

    for (int i = 0; i < liczbaElementow; ++i) {
        int licznik = 0;
        for (int j = 0; j < liczbaElementow; ++j) {
            if (tablica[i] == tablica[j]) {
                licznik++;
            }
        }
        if (licznik > maksWystapienia) {
            maksWystapienia = licznik;
            najczestszyElement = tablica[i];
        }
    }

    cout << "Najczesciej wystepujacy element to: " << najczestszyElement
         << " (wystapil " << maksWystapienia << " razy)" << endl;

    return 0;
}
