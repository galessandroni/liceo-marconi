# Ciao mamma, sono qui!

Il codice (commenti a parte) è identico al precedente, salvo tre linee di codice. Pertanto ci soffermeremo su quelle.

```cpp
/******************************************************************************
 * Ciao mamma sono qui!
 * Perche' noi commentiamo sempre i nostri programmi
 * spiegando cosa fanno.
 ******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    // Scriviamo qualcosa...
    cout << "Ciao mamma, sono qui!";

    return 0;
}
```
## Le inclusioni

La parola chiave ```#include```, che si utilizza solo all'inizio del codice, consente di includere (letteralmente) porzioni
di codice esterne. Così facendo, il codice non deve essere riscritto e può restare molto semplice.

> [!TIP]
> **DOMANDA** Perché tutte queste cose non vengono incluse senze che noi dobbiamo preoccuparci di farlo?
> 
> **RISPOSTA** Per far sì che il programma sia il più veloce possibile. Se aggiungessimo tutto e subito, il codice risultante
> sarebbe più pesante, conterrebbe elementi non utilizzati.

Di seguito parliamo di cosa abbiamo incluso. Gli informatici hanno il brutto vizio di sintetizzare tutto, all'estremo. Pertanto
```#include <iostream>``` significa *input/output stream*, ovvero *flusso ingresso/uscita* e consente di gestire le periferiche,
principalmente monitor e file.

> [!NOTE]
> Notate che i comanti che iniziano con ```#``` non hanno il ```;``` finale, pertanto dopo averli inseriti **occorre** andare
> a capo.

## namespace

Dopodiché incontriamo il comando ```using namespace std;```, in realtà un comando che si poteva omettere, vista la brevità
del codice, ma in contesti ordinari rende la scrittura del codice più veloce.

Se non ci fosse questo comando, ogni volta che si utilizza un comando generato dalla libreria si dovrebbe anteporre
```std::comando```. Sono cinque caratteri, ma se li moltiplichiamo per l'intero codice il risultato lo si nota.

> [!CAUTION]
> Utilizzando codici generati da intelligenze artificiali è tipico ritrovare ```std::comando``` come se piovesse. Quindi, se
> proprio dovete copiare, fatelo con cautela.

## Il codice

A questo punto, rimane il comando all'interno del ciclo principale. ```cout``` è un *comando* che invia in uscita *out* quel
che riceve. Da qui si capisce il perché del simbolo ```<<```, ovvero la direzione dei dati: da dove sono scritti a dove si
dirigono (in uscita).

Le virgolette racchiudono testo (spazi inclusi).

---

[Come ti chiami?](Variabili.md)
