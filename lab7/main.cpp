#include "Prawdopodobienstwo.h"
#include <iostream>
using namespace std;
int main() {
    double p;
    int n, k;
    cout << "Podaj p: ";
    cin >> p;
    cout << "Podaj n: ";
    cin >> n;
    cout << "Podaj k: ";
    cin >> k;
    Prawdopodobienstwo *prawdopodobienstwo = new Prawdopodobienstwo();
    cout << prawdopodobienstwo->obliczPrawdopodobienstwo(k, n, p) << endl;
    return 0;
}
