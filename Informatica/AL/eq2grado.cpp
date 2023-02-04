/*
 * eq2grado.cpp : Risolve equazioni di II grado acquisendo e restituendo dati da file esterni
 * (c) Feb 4th 2023, Giacomo Alessandroni, GNU/GPL
 */

// Input output con l'utente
#include <iostream>
// Input output con i file
#include <fstream>
// Gestione delle stringhe
#include <string>
// Comandi matematici
#include <cmath>

using namespace std;

// Variabili globali
// Parametri dell'equazione
float a, b, c;
// Zeri dell'equazione
float x1, x2;

class leggi {
    private:

    public:
};

class elabora {
    private:
        float delta;
    public:
        void risolvi() {
            delta = b * b - 4 * a * c;
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
        }
};

class scrivi {
    private:

    public:
};

void main()
{
    // Intestazione
    cout << "Risoluzione di equazioni di secondo grado\n\n";

    // Acquisizione dei parametri dell'equazione
    cout << "Digita il valore di a: ";
    cin >> a;
    cout << "Digita il valore di b: ";
    cin >> b;
    cout << "Digita il valore di c: ";
    cin >> c;

    // Calcolo delle radice
    elabora parabola;
    parabola.risolvi();

    // Esponi
    cout << "\nGli zeri dell'equazioni sono:\n";
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    system("pause");
}
