#include <iostream>
#include <climits>

using namespace std;

int main() {
    int iloscLiczb;
    cout << "Podaj ilość liczb: ";
    cin >> iloscLiczb;

    int *tablicaLiczb = new int[iloscLiczb];

    cout << "Podaj " << iloscLiczb << " liczb:\n";
    int *wskaznikTablicy = tablicaLiczb; // Wskaźnik na początek tablicy

    for (int i = 0; i < iloscLiczb; ++i) {
        cin >> *(wskaznikTablicy + i); // Używamy arytmetyki wskaźników
    }

    int maksimum = INT_MIN;
    int minimum = INT_MAX;

    for (int i = 0; i < iloscLiczb; ++i) {
        if (*(wskaznikTablicy + i) > maksimum) {
            maksimum = *(wskaznikTablicy + i);
        }
        if (*(wskaznikTablicy + i) < minimum) {
            minimum = *(wskaznikTablicy + i);
        }
    }

    cout << "Maksimum: " << maksimum << endl;
    cout << "Minimum: " << minimum << endl;

    delete[] tablicaLiczb;
    return 0;
}
