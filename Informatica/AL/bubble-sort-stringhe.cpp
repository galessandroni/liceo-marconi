/**********************************************************************
 * bubble-sort-stringhe.cpp
 * 
 * Analogamente al bubble sort, questo algoritmo e' stato scritto per 
 * ordinare stringhe.
 * Altra notevole differenza, e' l'utilizzo delle classi.
 ***********************************************************************/

#include<iostream>
using namespace std;

class bubble {
    public :
    
    string arr[100];
    int ok = 1;

    // Numero di elementi nell'array
    int n;

    // Funzione che popola l'array
    void read() {
        while(1) {
            cout << "\nInserire il numero di elementi dell'array: ";
            cin >> n;
            if ( n <= 100 )
                break;
            else
                cout << "\n L'array puo' contenere al massimo 100 elementi \n";
        }

        // Display the header
        cout << "\n";
        cout << "----------------------------------\n";
        cout << "Inserire gli elemendi dell'array  \n";
        cout << "----------------------------------\n";

        // Acquisisce gli elementi dell'array
        for( int i = 0; i < n; i++ ) {
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
            for( int i = 0; i < n; i++ ) {
                if( arr[i] > arr[i + 1] ) {
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
        for( int j = 0; j <= n; j++ )
            cout << arr[j] << endl;
    }
};

int main() {
    // Instantiate an instance of class
    bubble list;
    
    // Function call to accept array elements
    list.read();
    
    // Function call to sort array
    list.bubblesort();
    
    // Function call to display the sorted array
    list.display();
    
    return 0;
}
