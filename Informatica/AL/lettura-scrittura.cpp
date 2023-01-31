/*********************************************************
 * lettura-scrittura.cpp
 * Crea, scrive e legge un file
 *********************************************************/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  // Creazione
  ofstream MyWriteFile("natale.txt");

  // Scrittura
  // NB Andare a capo per avere piu' linee
  MyWriteFile << "Ambo\n";
  MyWriteFile << "Terno\n";
  MyWriteFile << "Quaterno\n";
  MyWriteFile << "Cinquina\n";
  MyWriteFile << "Tombola\n";
  MyWriteFile << "Tombolino\n";
 
  // Chiusura
  MyWriteFile.close();

  // Stringa di appoggio
  string myText;

  // Lettura file
  ifstream MyReadFile("natale.txt");

  // Lettura singola linea
  while (getline (MyReadFile, myText)) {
    // Stampa a video
    cout << myText << endl;
  }

  // Chiusura
  MyReadFile.close();
}
