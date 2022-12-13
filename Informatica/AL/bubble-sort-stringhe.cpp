/**********************************************************************
* bubble-sort-stringhe.cpp
*
* Analogamente al bubble sort, questo algoritmo e' stato scritto per
* ordinare stringhe.
* Altra notevole differenza, e' l'utilizzo delle classi.
***********************************************************************/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class bubble {
private:

	// Stringa di appoggio per gli elementi da ordinare
	string arr[100];
	// Flag per definire se e' stato fatto uno spostamento
	int ok = 1;
	// Numero di elementi nell'array
	int n;

	// Mostra l'intestazione
	void intestazione(string testo) {
		cout << "\n";
		cout << "----------------------------------\n";
		cout << testo << "\n";
		cout << "----------------------------------\n";
	}

public:

	// Costruttore della classe
	bubble(){
		read();
		bubblesort();
		display();
	};

	// Funzione che popola l'array
	void read();

	// Funzione bubble sort
	void bubblesort();

	// Funzione che stampa i risultati
	void display();
};

// Funzione che popola l'array
void bubble::read() {
	while (1) {
		cout << "\nInserire il numero di elementi dell'array: ";
		cin >> n;
		if (n > 0 && n <= 100)
			break;
		else
			cout << "\nL'array puo' contenere al massimo 100 elementi.\n";
	}

	// Mostra l'intestazione
	intestazione("Inserire gli elemendi dell'array");

	// Acquisisce gli elementi dell'array
	for (int i = 0; i < n; i++) {
		cout << "<" << i + 1 << "> ";
		cin >> arr[i];
	}
}

// Funzione bubble sort
void bubble::bubblesort() {

	// Finche' non c'è ordine
	while (ok == 1) {
		ok = 0;
		// Si scorre l'array finche' questo non e' ordinato
		for (int i = 0; i < n; i++) {
			if (arr[i] > arr[i + 1]) {
				string temp;
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				ok = 1;
			}
		}
	}
}

// Funzione che stampa i risultati
void bubble::display() {
	// Mostra l'intestazione
	intestazione("Elementi dell'array ordinato");

	for (int i = 0; i <= n; i++)
		cout << arr[i] << endl;
}

void main() {
	// Crea un'istanza della classe, la popola, la ordina e la mostra
	bubble lista;

	system("pause");
}
