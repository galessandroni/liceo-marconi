/******************************************************************************
 * giorni.cpp                                                                 *
 * Calcola i giorni intercorsi tra due anni                                   *
 * partendo dal primo gennaio del primo anno al 31 dicembre del secondo anno  *
 *                                                                            *
 * FOR, connettivi logici                                                     *
 ******************************************************************************/

#include <iostream>

using namespace std;

int bisestile(int a){
    // Anno divisibile per 4 AND divisibile per 400, ma non per 100
	if ( (a % 4 == 0) && ( a % 400 == 0 || a % 100 != 0) )
		return 366;
	// Per i restanti anni
	return 365;
}

int gg(int anno1, int anno2) {
	// Calcola i giorni trascorsi da anno1 a anno2
	// Restituisce 0 se anno2 < anno1 
	int gg = 0;

	for (int i = anno1; i <= anno2; i++)
		gg = gg + bisestile(i);
	return gg;
}

void main() {
	int anno1, anno2, giorni;

	// Chiede gli anni di cui calcolare l'intervallo in giorni
	cout << "Inserisci l'anno iniziale: ";
	cin >> anno1;
	cout << "Inserisci l'anno finale: ";
	cin >> anno2;

	giorni = gg(anno1, anno2);

	if (giorni == 0)
		cout << "\nErrore!\nLa data finale è precedente a quella iniziale.\n";
	else
    cout << "I  giorni tra il " << anno1 << " e il " << anno2 << " sono " << giorni << "\n";

    system ("pause");
}
