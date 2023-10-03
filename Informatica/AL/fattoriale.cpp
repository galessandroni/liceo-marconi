/*********************************************************************************************************************
 * fattoriale.cpp                                                                                                    *
 * Calcolo del fattoriale di un numero mediante algoritmo ricorsivo                                                  *
 *                                                                                                                   *
 * Funzioni ricorsive                                                                                                *
 *********************************************************************************************************************/

#include <iostream>
using namespace std;

// Algoritmo per il calcolo del fattoriale di un numero intero
int fattoriale(int k) {
  // Se il numero in input è superiore a zero
  if (k > 0) {
    // Il fattoriale è il numero dato moltiplicato per fattoriale del numero precedente
    return k * fattoriale(k - 1);
  } else {
    // La procedura continua ricorsivamente fino al fattoriale(0) = 1 per definizione
    return 1;
  }
}

// Programma principale
int main() {
  // Acquisisce il numero di cui calcolare il fattoriale  
  int n;
  cout << "Inserire il numero di cui calcolare il fattoriale: ";
  cin >> n;
  
  // Calcola il fattoriale del numero dato ed espone il risultato
  int result = fattoriale(n);
  cout << result;
}
