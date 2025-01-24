#include <iostream>
#include <string>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
};

int main() {

    Osoba osoby[3];
    string tabela[3][2];

    for (int i = 0; i < 3; i++) {
        cout << "Podaj imie osoby " << i + 1 << ": ";
        cin >> osoby[i].imie;
        cout << "Podaj nazwisko osoby " << i + 1 << ": ";
        cin >> osoby[i].nazwisko;
        tabela[i][0] = osoby[i].imie;
        tabela[i][1] = osoby[i].nazwisko;
    }

    cout << "\nDwuwymiarowa tabela z danymi:" << endl;
    cout << "Imie\t\tNazwisko" << endl;
    cout << "-------------------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << tabela[i][0] << "\t\t" << tabela[i][1] << endl;
    }

    return 0;
}
