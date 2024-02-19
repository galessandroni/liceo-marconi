# Come ti chiami?

Rispetto al programma precedente, passiamo a introdurre un nuovo tipo di variabile: la stringa (```string```).

Il programma utilizza la variabile ```nome``` per memorizzare quello che l'utente digita e restitusce una stringa di
testo che contiene il testo digitato.

## Codice completo

```cpp
/******************************************************************************
 * Dimmi come ti chiami
 * e io ti salutero'.
 ******************************************************************************/

#include <iostream>
using namespace std;

string nome;

int main() {
    // Scrive la richiesta e va a capo
    cout << "Come ti chiami?" << endl;

    // Acquisisce il nome
    cin >> nome;
    
    // Saluta (perche' e' educato)
    cout << "Ciao " << nome << ", piacere di conoscerti!";
    
    return 0;
}
```

## Variabili locali e globali

In questo caso la variabile ```nome``` è *globale* perché definita esternamente alle funzioni, pertanto ogni funzione
conoscerà il suo valore. Diversamente, se le variabili vengono definite all'interno di una funzione (in questo caso c'è
solo ```main```, ma potrebbero essercene di più) allora il loro valore sarebbe conosciuto solo all'interno della funzione
stessa. Per questo motivo vengono chiamate *locali*.

## Acquisizione dati

A differenza di ```cout```, ```cin``` rimane in attesa di dati, finché non viene premuto ```[Invio]```. Va sottolineato
il simbolo ```>>``` che mostra la diversa direzione dei dati (dal comando alla variabile).

Si noti che, invece in ```cout``` i termini ```<<``` possono essere tra loro concatenati per ottenere strutture anche
complesse, miscelando testi, variabili e comandi come ```endl``` che significa *fine linea* (*end line*).

> [!IMPORTANT]
> L'acquisizione termina con la pressione dell'invio, ma il dato che viene inviato alla variabile è quello digitato fino a
> un eventuale spazio (escluso). Se, per ipotesi, si digitasse: ```Giacomo Giovanni``` la variabile ```nome``` conterrebbe
> solo ```Giacomo```.
>
> Se, successivamente, ci fosse una seconda richiesta dati (es. il cognome), il termine ```Giovanni``` verrebbe assegnato
> a questa seconda variabile.

