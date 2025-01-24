#include <iostream>
using namespace std;

int main() {

    int month;
    cout << "Podaj liczbe z przedzialu [1,12], reprezentujaca miesiac: ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Podana liczba jest spoza przedzialu [1,12]." << endl;
        return 1;
    }

    string nazwaMiesiaca;
    int liczbaDni;
    bool slonecznie = false;

    switch (month) {
        case 1:
            nazwaMiesiaca = "Styczen";
            liczbaDni = 31;
            break;
        case 2:
            nazwaMiesiaca = "Luty";
            liczbaDni = 28;
            break;
        case 3:
            nazwaMiesiaca = "Marzec";
            liczbaDni = 31;
            break;
        case 4:
            nazwaMiesiaca = "Kwiecien";
            liczbaDni = 30;
            slonecznie = true;
            break;
        case 5:
            nazwaMiesiaca = "Maj";
            liczbaDni = 31;
            slonecznie = true;
            break;
        case 6:
            nazwaMiesiaca = "Czerwiec";
            liczbaDni = 30;
            slonecznie = true;
            break;
        case 7:
            nazwaMiesiaca = "Lipiec";
            liczbaDni = 31;
            slonecznie = true;
            break;
        case 8:
            nazwaMiesiaca = "Sierpien";
            liczbaDni = 31;
            slonecznie = true;
            break;
        case 9:
            nazwaMiesiaca = "Wrzesien";
            liczbaDni = 30;
            slonecznie = true;
            break;
        case 10:
            nazwaMiesiaca = "Pazdziernik";
            liczbaDni = 31;
            break;
        case 11:
            nazwaMiesiaca = "Listopad";
            liczbaDni = 30;
            break;
        case 12:
            nazwaMiesiaca = "Grudzien";
            liczbaDni = 31;
            break;
    }

    cout << "Miesiac: " << nazwaMiesiaca << endl;
    cout << "Liczba dni w miesiacu: " << liczbaDni << endl;

    if (slonecznie) {
        cout << "W tym miesiacu jest slonecznie." << endl;
    } else {
        cout << "W tym miesiacu jest pochmurno." << endl;
    }

    return 0;
}