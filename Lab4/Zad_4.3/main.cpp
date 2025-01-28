#include <iostream>
using namespace std;

int main() {
    const int ROZMIAR = 10;
    int tablica[ROZMIAR][ROZMIAR] = {0};

    for (int i = 0; i < ROZMIAR; i++) {
        tablica[i][0] = i;
    }

    for (int i = 0; i < ROZMIAR; i++) {
        tablica[i][1] = tablica[i][0] + tablica[i][0];
    }

    // Wyświetlenie tablicy
    cout << "Tablica (pierwsza kolumna i druga kolumna):" << endl;
    for (int i = 0; i < ROZMIAR; i++) {
        cout << "Wiersz " << i << ": "
             << "Pierwsza kolumna = " << tablica[i][0]
             << ", Druga kolumna = " << tablica[i][1] << endl;
    }

    return 0;
}