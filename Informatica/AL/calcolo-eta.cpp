/************************************
 * Prova.cpp: primo programma in C++
 *
 * Giacomo Alessandroni, 2H
 * Ultima revisione: 17 novembre 2022
 ************************************/

// Questa libreria è richiesta da Visual Studio
#include "stdafx.h"

// Di seguito la libreria per gestire input e output
#include <iostream>

// Per evitare di scrivere ogni volta "std::"
using namespace std;

// Definizione dell'anno corrente
#define AnnoCorrente 2022


// main() è la funzione principale
// viene eseguita per prima
// è "vuota" (void) nel senso che non restituisce nulla
void main()
{
	// Definisco una variabile locale di tipo intero (int, numeri interi positivi e negativi)
	int dob;
	
	// Scrive nel monitor il testo tra virgolette o le variabili
	// "<<" serve per indirizzare il flusso e concatenare
	cout << "Ciao, sono il tuo primo programma." << endl << "Quando sei nato? ";

	// Acquisisco il nome del mio signore e padrone
	cin >> dob;

	// Scrive il numero di anni trascorsi (ipotizzando che oggi sia il 2022)
	cout << "Sono in grado di comunicarti che hai " << AnnoCorrente - dob << " anni." << endl;

	system("pause");
}
