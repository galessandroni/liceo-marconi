/*********************************************************************************************************************
 * fattoriale.cpp                                                                                                    *
 * Calcolo del fattoriale di un numero mediante algoritmo ricorsivo                                                  *
 *                                                                                                                   *
 * Funzioni ricorsive                                                                                                *
 *********************************************************************************************************************/

#include "stdafx.h"
#include <iostream>

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
void main() {
  // Acquisisce il numero di cui calcolare il fattoriale  
  int n;
  std::cout << "Inserire il numero di cui calcolare il fattoriale: ";
  std::cin >> n;
  
  // Calcola il fattoriale del numero dato ed espone il risultato
  int result = fattoriale(n);
  std::cout << result;
  system("pause");
}
