# Database

Gli elementi principali di un database sono principalmente due:

* tabelle.
* query.

Per distinguerli verranno codificati col prefisso `tblMiaTabella` e `qryMiaQuery` poiché - se visualizzati in un database - il risultato protrebbe essere simile. Di più: da una query si possono aggiornare e cancellare dati in una tabella.

La query di esempio [qrySchedina.sql](qrySchedina.sql), dati in ingresso i risultati dei varie giornate di campionato riportate tutte nella tabella `tblPartite` filtra una generica giornata (per esempio la quarta) e restituisce i risultati di quella sola giornata con una colonna in più: quella relativa a un'ipotetica schedina, ottenuta tramite due IF annidati:

```SQL
IIf(PCasa > PFuoriCasa, "1", IIf(PCasa = PFuoriCasa, "X", "2"))
```

La sintassi della funzione è molto semplice:

```SQL
IIf(CONDIZIONE, PARTE VERA, PARTE FALSA)
```

I valori numerici `1` e `2` sono riportati tra virgolette per evitare errori quando il costrutto restituisce `X` che non è di tipo numerico. Con le virgolette, al sistema vengono forniti elementi di tipo `string`.

Per il resto i comandi utilizzati sono:

* `SELECT` che seleziona le colonne da utilizzare. Nel caso si desiderino utilizzare tutte le colonne è sufficiente scrivere `*`. Sempre all'interno di `SELECT` è possibile usare il comando `AS` per cambiare il nome con cui si elaboreranno i dati.
* `FROM` spercifica il nome della tabella. Nel caso di più tabelle in `SELECT` queste andranno specificate così:

```SQL
SELECT Tabella1.Colonna1, Tabella1.Colonna2, Tabella2.Colonna1
FROM Tabella1, Tabella2;
```

* `WHERE` specifica una o più condizioni. Per esempio se si vogliono ottenere i dati dove i pagamenti superano i 100 € si scriverà `WHERE Importo > 100`.
