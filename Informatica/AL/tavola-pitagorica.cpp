/******************************************************************************
* tavola-pitagorica.cpp                                                       *
* Generazione di una tavola pitagorica con c colonne e r righe                *
*                                                                             *
* Ciclo FOR                                                                   *
* Funzioni                                                                    *
*******************************************************************************/

#include <iostream>
using namespace std;

// Colonne e righe della tavola pitagorica
// c ed r sono variabili globali
int c = 12, r = 12;

// Restituisce il numero di cifre di un dato numero in modo ricorsivo
int numCifre(int n) {
	if (n < 10)
		return 1;
	return 1 + numCifre(n / 10);
}

// Numero di spazi da inserire tra un numero e il successivo
void spazi(int n) {
	int s = 4 - numCifre(n);
	for (int k = 0; k < s; k++)
		cout << " ";
}

// Formattazione delle righe e colonne
void linea() {
	cout << " ";
	// Inserisce la formattazione per ogni colonna
	for (int j = 1; j <= c; j++)
		cout << "+-----";
	// Chiude la colonna e va a capo
	cout << "+\n";
}

// Chiede all'utente i parametri di input
void inserimento_dati() {
	// Inserimento dati
	// Colonne
	do {
		if (c < 1)
			cout << "Ciao insensato!\n";
		cout << "Numero di colonne: ";
		cin >> c;
	} while (c < 1);
	// Righe
	do {
		if (r < 1)
			cout << "Ciao insensato!\n";
		cout << "Numero di righe: ";
		cin >> r;
	} while (r < 1);
}

// Creazione tavola pitagorica
void pitagora() {
	// Controllo righe
	for (int i = 1; i <= r; i++) {
		// Inizio tabella e riga
		linea();
		// Controllo colonne
		for (int j = 1; j <= c; j++) {
			// Inserisce l'inizio cella
			cout << " |";
			// Inserisce gli spazi per un corretto allineamento a destra
			spazi(i * j);
			// Inserisce il numero della tavola pitagorica
			cout << i * j;
		}
		// Inserisce la fine cella e passa alla riga successiva
		cout << " |\n";
	}
	// Fine tabella
	linea();
}

int main() {
	// Inserimento dati
	inserimento_dati();

	// Creazione tavola pitagorica
	pitagora();
}
