# Il programma fannullone

Basta la parola! Questo programma non fa nulla. Ma insegna molte cose. Guardiamolo insieme:

```cpp
/******************************************************************************
 * Io non faccio niente.
 * Sono pigro.
*******************************************************************************/

int main() {
    return 0;
}
```

In due parole. Non ci ricorderemo mai, mai, mai tutte le cose che abbiamo scritto nel nostro codice. Per questa ragione
ci vengono in soccorso i nostri *commenti* che saranno di due tipi:

* **lunghi** come quello mostrato all'inizio del codice, dove si vogliono scrivere più righe. Questi iniziano con
```/*``` e terminano con ```*/```. Tutto il contenuto verrà ignorato. Serve solo a noi umani per capire perché avevamo
scritto questo o quello.
* **in linea** quando terminano alla fine della linea. Iniziano con ```//``` e terminano quando si va a capo.

Il C++ (si legge *si plas plas*, sarebbe inglese) è l'evoluzione del linguaggio di programmazione C dove **ogni** cosa è
un *oggetto* e il primo oggetto che il compilatore cerca è il programma principale: ```main()```. Pure lui è un oggetto. Le
parentesi aperte e chiuse stanno a significare che non richiede argomenti in ingresso.

Il tipo di uscita che viene restituita (```return```) alla fine del codice viene specificato prima di definirlo. Un classico
è ```int``` ovvero intero (un qualsiasi numero). Ecco perché vi è scritto ```return 0;```. ```return``` è l'istruzione che
quando viene incontrata conclude la funzione (in questo caso il programma principale). Naturalmente la potremmo scrivere più
volte, se volessimo concludere in differenti punti per altrettanti motivi il codice. Il numero ```0``` (in questo caso) non
significa assolutamente nulla, dal momento che il programma termina il suo lavoro. Si poteva scrivere qualsiasi altro numero
al suo posto e non sarebbe cambiato nulla.

Infine la cosa più importante: il ```;```. Viene utilizzato per dire che il comando (l'unico) è terminato.

Va detta una cosa. Le funzioni e i costrutti, che incontreremo uno alla volta, vengono racchiusi tra parentesi graffe. Per chi
non avesse una tastiera americana (penso quasi tutti), si ottengono con la pressione dei tasti ```[Maiusc] + [alt gr] + [```
per la parentesi aperta ```{```. Similmente, ```[Maiusc] + [alt gr] + ]``` per la parentesi aperta ```}```.

---

[Ciao mamma, sono qui!](Ciaomamma.md)
