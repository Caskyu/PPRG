#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    cout << "Podaj liczbe n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Liczba musi byc wieksza od zera." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            count++;
        }
    }

    cout << "Liczb naturalnych nie wiekszych od " << n << " podzielnych przez 5, ale nie przez 3: " << count << endl;

    return 0;
}
