#include <iostream>
//Zad 1.2

int main() {
    int liczba;

    // Pobranie liczby od użytkownika
    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> liczba;

    // Sprawdzenie warunków
    if (liczba > 0) {
        std::cout << "Liczba jest dodatnia." << std::endl;
    } else if (liczba < 0) {
        std::cout << "Liczba jest ujemna." << std::endl;
    } else {
        std::cout << "Liczba jest rowna 0." << std::endl;
    }

    return 0;
}
