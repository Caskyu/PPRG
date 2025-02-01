#include <iostream>
#include <string>

using namespace std;

struct Uczen {
    string imie;
    int oceny[4];
};

int main() {
    const int liczbaUczniow = 6;
    const int liczbaPrzedmiotow = 4;
    string nazwyPrzedmiotow[liczbaPrzedmiotow] = {"Informatyka", "Matematyka", "Biologia", "Język Polski"};

    Uczen uczniowie[liczbaUczniow];

    for (int i = 0; i < liczbaUczniow; i++) {
        cout << "Podaj imię ucznia " << i + 1 << ": ";
        cin >> uczniowie[i].imie;

        cout << "Podaj oceny z Informatyki, Matematyki, Biologii i Języka Polskiego: ";
        for (int j = 0; j < liczbaPrzedmiotow; j++) {
            cin >> uczniowie[i].oceny[j];
        }
    }

    int numerUcznia, numerPrzedmiotu;
    cout << "Podaj numer ucznia (1-6): ";
    cin >> numerUcznia;
    if (numerUcznia < 1 || numerUcznia > liczbaUczniow) {
        cout << "Niepoprawny numer ucznia!" << endl;
        return 1;
    }

    cout << "Podaj numer przedmiotu (1- Informatyka, 2- Matematyka, 3- Biologia, 4- Język Polski): ";
    cin >> numerPrzedmiotu;
    if (numerPrzedmiotu < 1 || numerPrzedmiotu > liczbaPrzedmiotow) {
        cout << "Niepoprawny numer przedmiotu!" << endl;
        return 1;
    }

    cout << "Uczeń " << uczniowie[numerUcznia - 1].imie << " ma ocenę " << uczniowie[numerUcznia - 1].oceny[numerPrzedmiotu - 1] << " z " << nazwyPrzedmiotow[numerPrzedmiotu - 1] << "." << endl;

    return 0;
}


