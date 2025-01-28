#include <iostream>
#include <vector>
using namespace std;

int main() {
    int liczbaElementow;

    cout << "Podaj liczbe elementow tablicy: ";
    cin >> liczbaElementow;

    if (liczbaElementow <= 0) {
        cout << "Tablica musi miec co najmniej jeden element." << endl;
        return 1;
    }

    vector<int> tablica(liczbaElementow);
    cout << "Podaj " << liczbaElementow << " elementow tablicy:" << endl;

    for (int i = 0; i < liczbaElementow; ++i) {
        cin >> tablica[i];
    }

    int maksymalnyElement = tablica[0];
    for (int i = 1; i < liczbaElementow; ++i) {
        if (tablica[i] > maksymalnyElement) {
            maksymalnyElement = tablica[i];
        }
    }

    cout << "Najwiekszy element tablicy to: " << maksymalnyElement << endl;

    return 0;
}
