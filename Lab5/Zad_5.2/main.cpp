#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    if (n <= 0) {
        cout << "Rozmiar tablicy musi byc większy od zera" << endl;
        return 1;
    }

    vector<int> tablica(n);
    cout << "Podaj " << n << " elementow: ";
    for (int i = 0; i < n; i++) {
        cin >> tablica[i];
    }

    int mid = n / 2;
    for (int i = 0; i < mid; i++) {
        swap(tablica[i], tablica[n - i - 1]);
    }

    cout << "Tablica po zamianie: ";
    for (int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;
}
