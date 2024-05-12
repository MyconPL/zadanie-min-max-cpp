#include <iostream>
#include <climits>

using namespace std;

int main() {
    int liczbaElementow;
    cout << "Podaj ilość liczb w ciągu: ";
    cin >> liczbaElementow;

    int *tablicaLiczb = new int[liczbaElementow];
    cout << "Podaj " << liczbaElementow << " liczb:\n";
    for (int i = 0; i < liczbaElementow; ++i) {
        cin >> tablicaLiczb[i];
    }

    int maksimum = INT_MIN;
    int minimum = INT_MAX;

    for (int i = 0; i < liczbaElementow; ++i) {
        if (tablicaLiczb[i] > maksimum) {
            maksimum = tablicaLiczb[i];
        }
        if (tablicaLiczb[i] < minimum) {
            minimum = tablicaLiczb[i];
        }
    }

    cout << "Maksimum: " << maksimum << endl;
    cout << "Minimum: " << minimum << endl;

    delete[] tablicaLiczb;
    return 0;
}
