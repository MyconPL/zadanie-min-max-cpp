#include <iostream>
#include <climits>

using namespace std;

int main() {
    int iloscLiczb;
    cout << "Podaj ilość liczb: ";
    cin >> iloscLiczb;

    int *tablicaLiczb = new int[iloscLiczb];
    int *wskaznikTablicy = tablicaLiczb;

    cout << "Podaj " << iloscLiczb << " liczb:\n";
    for (int i = 0; i < iloscLiczb; ++i) {
        cin >> *(wskaznikTablicy + i);
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

    cout << "Największa liczba: " << maksimum << endl;
    cout << "Najmniejsza liczba: " << minimum << endl;

    delete[] tablicaLiczb;
    return 0;
}
