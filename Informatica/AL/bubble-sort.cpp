// bubble-sort.cpp

#include <iostream>
using namespace std;
// Numero di elementi da ordinare
int n;
// Vettore che conterra' gli elementi da ordinare
int elementi[100];
int ok = 1;

// Funzione che inverte le posizioni di due elementi [i] e [i + 1]
void scambia(int i) {
    // appoggio [i] in una variabile temporanea
    int app = elementi[i];
    // porto [i + 1] su [i]
    elementi[i] = elementi[i + 1];
    // porto [i] (salvata nella variabile app) su [i + i]
    elementi[i + 1] = app;
    // Notifico che la lista potrebbe non essere del tutto ordinata
    ok++;
}

int main() {
    cout << "Quanti elementi vuoi ordinare (max 100): ";
    cin >> n;

    // Acquisizione degli elementi da ordinare
    cout << "Inserire i dati numerici interi da ordinare:\n";
    for (int i = 1; i <= n; i++) {
        cout << "Elemento n. " << i << ": ";
        cin >> elementi[i];
    }

    // Routine di ordinamento (crescente)
    while(ok > 0) {
        // ok = 0 significa "Lista ordinata"
        ok = 0;
        // Scorro tutta la lista
        for (int i = 1; i < n; i++)
            // Se due elementi vicini non sono in ordine
            if (elementi[i] > elementi[i + 1])
                // Li scambio
                scambia(i);
    }

    cout << "Ecco a voi la lista ordinata:\n";
    for (int i = 1; i <= n; i++)
        cout << "Elemento n. " << i << ": " << elementi[i] << "\n";

    return 0;
}
