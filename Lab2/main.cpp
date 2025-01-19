#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Podaj wartosc n: ";
    cin >> n;

    int sumaSzeregu = 0;

    for (int i = 1; i <= n; i++) {
        int sumaElementu = 0;

        for (int j = 1; j <= i; j++) {
            sumaElementu += j;
            cout << j;
            if (j < i) cout << " + ";
        }

        cout << " = " << sumaElementu << endl;
        sumaSzeregu += sumaElementu;
    }

    cout << "Suma szeregu: " << sumaSzeregu << endl;

    return 0;
}
