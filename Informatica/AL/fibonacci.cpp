/*********************************************************************************************************************
 * fibonacci.cpp                                                                                                     *
 * La successione di Fibonacci è una successione di numeri interi in cui ciascun numero è la somma dei due           *
 * precedenti, eccetto i primi due che sono, per definizione, 0 e 1.                                                 *
 *                                                                                                                   *
 * Funzioni ricorsive, costrutto WHILE                                                                               *
 *********************************************************************************************************************/

#include "stdafx.h"
#include <iostream>

// Algoritmo per il calcolo della successione di Fibonacci di un dato numero
int fibo(int n){
    // Se il numero è 0 o 1 applica la definizione
    if(n < 2)
        return n;
    // Altrimenti la formula ricorsiva
    return fibo(n - 1) + fibo(n - 2);
}

// Programma principale
void main() {
    int n, i = 0;
   
    // Chiede la lunghezza della successione
    std::cout << "Inserisci il numero di termini della successione: ";
    std::cin >> n;
   
    std::cout << "\nSuccessione di Fibonnaci:";
    // Restituisce tutti i termini della sucessione partendo da 0
    while(i < n) {
        std::cout << " " << fibo(i);
        i++;
     }
     system("pause");
}
