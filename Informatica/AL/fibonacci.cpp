/***************************************************************************
 *   La successione di Fibonacci è una successione di numeri interi in cui *
 *   ciascun numero è la somma dei due precedenti, eccetto i primi due che *
 *   sono, per definizione, 0 e 1.                                         *
 ***************************************************************************/

#include <iostream>
using namespace std;

int fibo(int n){
    if(n < 2)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
   int n, i = 0;
   
   cout << "Inserisci il numero di termini della successione: ";
   cin >> n;
   
   cout << "\nSuccessione di Fibonnaci:";
   while(i < n) {
      cout << " " << fibo(i);
      i++;
   }
   return 0;
}