#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    cout << "a = " << a << ", b = " << b << endl;

    cout << "\nB) Wiersz gwiazdek o dlugosci a:" << endl;
    for (int i = 0; i < a; i++) {
        cout << "*";
    }
    cout << endl;

    cout << "\nC) Kolumna gwiazdek o dlugosci b:" << endl;
    for (int i = 0; i < b; i++) {
        cout << "*" << endl;
    }

    cout << "\nD) Wypelniony prostokat o wymiarach a x b:" << endl;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nE) Obramowanie prostokata o wymiarach a x b:" << endl;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0 || i == b - 1 || j == 0 || j == a - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "\nF*) Trojkat prostokatny z lewym dolnym katem prostym:" << endl;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nG*) Trojkat prostokatny z prawym gornym katem prostym:" << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (j < i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}