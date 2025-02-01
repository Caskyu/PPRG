#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe elementow wektora: ";
    cin >> n;

    if (n <= 0) {
        cout << "Liczba elementow musi być wieksza od zera." << endl;
        return 1;
    }

    vector<int> wektor(n);
    cout << "Podaj " << n << " elementow: ";
    for (int i = 0; i < n; i++) {
        cin >> wektor[i];
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (wektor[i] > wektor[maxIndex]) {
            maxIndex = i;
        }
    }

    cout << "Maksymalna wartosc: " << wektor[maxIndex] << endl;
    cout << "Indeks maksymalnego elementu: " << maxIndex << endl;

    return 0;
}
