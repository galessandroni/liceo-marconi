/*********************************************************************************************************************
 * tavola-pitagorica.cpp                                                                                             *
 * Generazione di una tavola pitagorica con c colonne e r righe                                                      *
 *                                                                                                                   *
 * Ciclo FOR                                                                                                         *
 *********************************************************************************************************************/

#include "stdafx.h"
#include <iostream>
// Colonne e righe della tavola pitagorica
int c = 12, r = 12;

// Numero di spazi da inserire tra un numero e il successivo
void spazi(int n) {
	int s = 3;
	if (n > 9)
		s = 2;
	if (n > 99)
		s = 1;
	for (int k = 0; k < s; k++)
		std::cout << " ";
}

// Formattazione delle righe e colonne
void linea() {
	std::cout << " ";
	// Inserisce la formattazione per ogni colonna
	for (int j = 1; j <= c; j++)
		std::cout << "+-----";
	// Chiude la colonna e va a capo
	std::cout << "+\n";
}

void main() {
	// Controllo righe
	for (int i = 1; i <= r; i++)
	{
		// Inizio tabella e riga
		linea();
		// Controllo colonne
		for (int j = 1; j <= c; j++)
		{
			// Inserisce l'inizio cella
			std::cout << " |";
			// Inserisce gli spazi per un corretto allineamento a destra
			spazi(i*j);
			// Inserisce il numero della tavola pitagorica
			std::cout << i * j;
		}
		// Inserisce la fine cella e passa alla riga successiva
		std::cout << " |\n";
	}
	// Fine tabella
	linea();
	system("pause");
}
