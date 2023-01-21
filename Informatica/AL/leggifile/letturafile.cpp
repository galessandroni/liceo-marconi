// letturafile.cpp 
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Qui finisce acquisiamo il testo
    string myText;
    // Numero riga
    int riga = 0;

    // Leggo dal file di testo "noi.txt"
    ifstream MyReadFile("noi.txt");

    // Uso un ciclo while con la funzione getline()
    // per leggere il file riga per riga
    while (getline(MyReadFile, myText)) {
        // Incremento il numero di righe
        riga++;
        // Mostra la riga e il testo del file
        // NB myText deve essere convertito in stringa
        printf("%2d %s\n", riga, myText.c_str());
    }

    // Chiudo il file
    MyReadFile.close();

    printf("\nIl file e' composto da %d record\n\n", riga);

    system("pause");
}
