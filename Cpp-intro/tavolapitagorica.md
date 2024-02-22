# Il club dei pitagorici

Per generare una tavola pitagorica occorre scorrere *righe* e *colonne* fino a un dato numero.

Contando da 1 a 10 (o qualsiasi altro numero) otteniamo le colonne. Ma, ogni colonna, va ripetura per la sua riga. Morale della favola:
i conteggi saranno due, uno all'interno dell'altro.

## Okay, ma come si conta? (ciclo for)

Il ciclo `for` ripete un'operazione finché non si verifica una condizione. Un tipico esempio è il conteggio da 1 a 10. Il codice è il seguente:

```cpp
for (int i = 1; 1 <= 10; i++) {
  \\ Codice da eseguire 10 volte
}
```

> [!TIP]
> Agli informatici piace risparmiare inchiostro. Per scrivere *incrementa una variabile*, in questo caso `i` non scrivono `i = i + 1` ma la sua
> forma breve `i++` che esegue la madesima operazione (incremento) ma più elegantemente.

Questo è il diagramma di flusso di un generico ciclo for, ovvero di come viene interpretato dal compilatore.

![Diagramma di flusso che mostra il funzionamento di un ciclo for](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d1/For-loop-diagram.svg/256px-For-loop-diagram.svg.png)

## Esempio di utilizzo di ciclo for

## La tavola pitagorica (cicli for annidati)

---
