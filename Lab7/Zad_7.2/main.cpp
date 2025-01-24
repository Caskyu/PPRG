#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

void checkDivisibility(unsigned long long result) {
    cout << "Silnia wynosi: " << result << endl;

    if (result % 2 == 0) {
        cout << "Wynik jest podzielny przez 2." << endl;
    } else {
        cout << "Wynik nie jest podzielny przez 2." << endl;
    }

    if (result % 3 == 0) {
        cout << "Wynik jest podzielny przez 3." << endl;
    } else {
        cout << "Wynik nie jest podzielny przez 3." << endl;
    }

    if (result % 5 == 0) {
        cout << "Wynik jest podzielny przez 5." << endl;
    } else {
        cout << "Wynik nie jest podzielny przez 5." << endl;
    }

    if (result % 11 == 0) {
        cout << "Wynik jest podzielny przez 11." << endl;
    } else {
        cout << "Wynik nie jest podzielny przez 11." << endl;
    }
}

int main() {

    int number;
    cout << "Podaj liczbe calkowita, dla ktorej chcesz obliczyc silnie: ";
    cin >> number;

    if (number < 0) {
        cout << "Silnia nie jest zdefiniowana dla liczb ujemnych!" << endl;
        return 1;
    }

    unsigned long long result = factorial(number);
    checkDivisibility(result);

    return 0;
}
