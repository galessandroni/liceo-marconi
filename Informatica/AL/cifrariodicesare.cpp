/******************************************************************************
 *
 * cifrariodicesare.cpp
 *
 * Questo programma chiede all'utente di scrivere un testo
 * Successivamente la chiave di codifica
 * Lo codifica mostrando il risultato a video
 *  Salva il testo codificato in un file
 *  Legge il file
 * Chiede la chiave di decodifica
 * Mostra il risultato in chiaro (se la chiave e' corretta)
 * 
 * (c) 2023, Giacomo Alessandroni, GNU/GPL 3.0
 * 
 ******************************************************************************/

#include <algorithm>    // Aggiunge funzioni
#include <iostream>     // Flusso dati con l'utente
#include <string>       // Gestione delle stringhe
#include <fstream>      // Flusso dati con i file

using namespace std;

class codifica {
    private:
        string nameFile;    // Nome del file dove memorizzo il testo codificato
        string plainText;   // Testo in chiaro
        string codedText;   // Testo codificato
        int key = 0;        // Chiave di cifratura
    public:
        // Acquisisce il testo
        void getText() {
            getline(cin, plainText);
            // Converte il testo in maiuscolo
            transform(plainText.begin(), plainText.end(), plainText.begin(), toupper);
        }
        
        // Imposta la chiave di cifratura
        void getKey() {
            key = 0;
            while (key < 1 || key > 25)
                cin >> key;
        }
        
        // Codifica il testo
        void code() {
            codedText = "";
            for (int i = 0; i < plainText.length(); i++)
                if (plainText[i] != ' ')
                    codedText += ( plainText[i] - 'A' + key ) % 26 + 'A';
                else
                    codedText += ' ';
            cout << "|-> " << codedText << " <-|\n";
        }

        // Decodifica il testo
        void decode() {
            plainText = "";
            for (int i = 0; i < codedText.length(); i++)
                if (codedText[i] != ' ')
                    plainText += ( codedText[i] - 'A' - key + 26 ) % 26 + 'A';
                else
                    plainText += ' ';
            cout << "|-> " << plainText << " <-|\n";
        }
    
    // Salva il file codificato
    void save(string nomeFile) {

    }

    // Legge il file codificato
    void read(string nomeFile) {
        nameFile = nomeFile;
        
          // Legge il file e riversa il contenuto della prima linea in codedText
          ifstream MyReadFile(nameFile);
          getline (MyReadFile, codedText);
          MyReadFile.close();
    }
};


int main()
{
    cout << "Cifrario di Cesare\n\n";
    
    codifica cifra;
    
    // Acquisisce il testo
    cout << "Digitare il testo da cifrare\n";
    cifra.getText();
    
    // Imposta la chiave di cifratura
    cout << "Inserire la chiave di cifratura (1 ... 25): ";
    cifra.getKey();
    
    // Codifica il testo
    cout << "Di seguito il testo criptato\n"; 
    cifra.code();

    // Salva il file codificato
    cifra.save("file.txt");

    // Legge il file codificato e
    // inserisce il contenuto in codedText
    cifra.read("file.txt");
    
    // Imposta la chiave di decifratura
    cout << "Inserire la chiave di decifratura (1 ... 25): ";
    cifra.getKey();
    
    // Decodifica il testo
    cout << "Di seguito il testo in chiaro\n";
    cifra.decode();    

    return 0;
}
