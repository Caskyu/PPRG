#include <iostream>
using namespace std;

int main() {
    char znak;

    cout << "Podawaj znaki (program zakonczy dzialanie po wpisaniu 't'):\n";

    do {
        cin >> znak;
        if (znak != 't') {
            cout << "Wprowadzono znak: " << znak << endl;
        }
    } while (znak != 't');

    cout << "Podano znak 't'. Koniec programu." << endl;

    return 0;
}
