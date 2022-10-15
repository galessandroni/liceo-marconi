
/*********************************************************************************************************************
* saldi.cpp                                                                                                          *
* Applica uno sconto in base all'importo speso                                                                       *
*                                                                                                                    *
**********************************************************************************************************************/

#include <iostream>

// Definizione dell'Imposta sul Valore Aggiunto
const float IVA = 0.22;
// Definizione degli sconti
const float Sconto0 = 0;
const float Sconto1 = .05;
const float Sconto2 = .1;
// Definizione soglie di sconto
const float Soglia0 = 0;
const float Soglia1 = 100;
const float Soglia2 = 1000;
// Definizione delle variabili
float importo, importo_scontato, importo_ivato;

void main() {
	// Acquisizione importo
	std::cout << "Inserisci importo: ";
	std::cin >> importo;
	// Calcolo dell'importo scontato
	if (importo >= Soglia0 && importo < Soglia1)
		importo_scontato = importo * (1 - Sconto0);
	if (importo >= Soglia1 && importo < Soglia2)
		importo_scontato = importo * (1 - Sconto1);
	if (importo >= Soglia2)
		importo_scontato = importo * (1 - Sconto2);
	// Calcolo dell'importo ivato
	importo_ivato = importo_scontato * (1 + IVA);
	// Esposizione dei risultati
	std::cout << "Importo scontato: " << importo_scontato << "\n";
	std::cout << "Importo ivato: " << importo_ivato << "\n";
	system("pause");
}
