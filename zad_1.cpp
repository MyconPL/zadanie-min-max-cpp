#include <iostream>
#include <climits>

using namespace std;

int main() {
    setlocale(LC_ALL, "polish");
    int iloscLiczb;
    cout << "Podaj ilość liczb w ciągu: ";
    cin >> iloscLiczb;

    int liczby[iloscLiczb];
    cout << "Podaj " << iloscLiczb << " liczb:\n";
    for (int i = 0; i < iloscLiczb; ++i) {
        cin >> liczby[i];
    }

    int maksimum = INT_MIN;
    int minimum = INT_MAX;

    for (int i = 0; i < iloscLiczb; ++i) {
        if (liczby[i] > maksimum) {
            maksimum = liczby[i];
        }
        if (liczby[i] < minimum) {
            minimum = liczby[i];
        }
    }

    cout << "Największa wartość: " << maksimum << endl;
    cout << "Najmniejsza wartość: " << minimum << endl;

    return 0;
}
