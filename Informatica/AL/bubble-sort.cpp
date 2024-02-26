// bubble-sort.cpp

#include <iostream>
using namespace std;
int n;
int elementi[100];
int ok = 1;

void scambia(int i) {
    int app = elementi[i];
    elementi[i] = elementi[i + 1];
    elementi[i + 1] = app;
}

int main() {
    cout << "Quanti elementi vuoi ordinare (max 100): ";
    cin >> n;

    cout << "Inserire i dati numerici interi da ordinare:\n";
    for (int i = 1; i <= n; i++) {
        cout << "Elemento n. " << i << ": ";
        cin >> elementi[i];
    }

    while(ok > 0) {
        ok = 0;
        for (int i = 1; i < n; i++) {
            if (elementi[i] > elementi[i + 1]) {
                scambia(i);
                ok++;
            }
        }
    }

    cout << "Ecco a voi la lista ordinata:\n";
    for (int i = 1; i <= n; i++)
        cout << "Elemento n. " << i << ": " << elementi[i] << "\n";

    return 0;
}
