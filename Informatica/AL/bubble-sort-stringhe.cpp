/**********************************************************************
 * bubble-sort-stringhe.cpp
 * 
 * Analogamente al bubble sort, questo algoritmo e' stato scritto per 
 * ordinare stringhe.
 * Altra notevole differenza, e' l'utilizzo delle classi.
 ***********************************************************************/

#include <iostream>
using namespace std;

class bubble {
    private :
    
    string arr[100];
    int ok = 1;

    // Numero di elementi nell'array
    int n;   
    
    public :
    
    // Funzione che popola l'array
    void read() {
        while(1) {
            cout << "\nInserire il numero di elementi dell'array: ";
            cin >> n;
            if ( n > 0 && n <= 100 )
                break;
            else
                cout << "\nL'array puo' contenere al massimo 100 elementi.\n";
        }

        // Mostra l'intestazione
        cout << "\n";
        cout << "----------------------------------\n";
        cout << "Inserire gli elemendi dell'array  \n";
        cout << "----------------------------------\n";

        // Acquisisce gli elementi dell'array
        for ( int i = 0; i < n; i++ ) {
            cout << "<" << i+1 << "> ";
            cin >> arr[i];
        }
    }

    // Funzione bubble sort
    void bubblesort() {
      
        // Finche' non c'è ordine
        while ( ok == 1 ) {
            ok = 0;
            // Si scorre l'array finche' questo non e' ordinato
            for ( int i = 0; i < n; i++ ) {
                if ( arr[i] > arr[i + 1] ) {
                    string temp;
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    ok = 1;
                }
            }
        }
    }

    void display() {
        // Mostra l'intestazione
        cout << "\n";
        cout << "----------------------------------\n";
        cout << "Elementi dell'array ordinato \n";
        cout << "----------------------------------\n";
        
        for ( int i = 0; i <= n; i++ )
            cout << arr[i] << endl;
    }
};

int main() {
    // Crea un'istanza della classe
    bubble lista;
    
    // Richiama la funzione che popola l'array
    lista.read();
    
    // Richiama la funzione che ordina l'array
    lista.bubblesort();
    
    // Richiama la funzione che mostra l'array ordinato
    lista.display();
    
    return 0;
}
