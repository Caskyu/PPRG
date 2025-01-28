#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Rownanie kwadratowe ma postac: ax^2 + bx + c = 0\n";

    double a, b, c;
    cout << "Podaj wartosc A: ";
    cin >> a;
    cout << "Podaj wartosc B: ";
    cin >> b;
    cout << "Podaj wartosc C: ";
    cin >> c;

    cout << "Twoje rownanie kwadratowe: " << a << "x^2 + " << b << "x + " << c << " = 0\n";

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Rownanie ma nieskonczenie wiele rozwiazan.\n";
            } else {
                cout << "Rownanie sprzeczne - brak rozwiazan.\n";
            }
        } else {
            double x = -c / b;
            cout << "Rownanie liniowe. Rozwiazanie: x = " << x << endl;
        }
        return 0;
    }

    double delta = b * b - 4 * a * c;
    cout << "Delta wynosi: " << delta << endl;

    if (delta > 0) {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "Rownanie ma dwa pierwiastki:\n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "Rownanie ma jeden podwojny pierwiastek:\n";
        cout << "x = " << x << endl;
    } else {
        cout << "Rownanie nie ma pierwiastkow rzeczywistych.\n";
    }

    return 0;
}
