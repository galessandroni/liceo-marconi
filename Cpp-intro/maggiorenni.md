# Quanti hanni hai?

Ora passiamo a programmi che rispondono diversamente a seconda dei dati in ingresso. Ovvero **se** l'età è inferiore ai 18
anni (quindi si introdurrà un dato numerico) **allora** ci sarà una risposta, **altrimenti** una risposta differente**.

## Un po' di logica

Prima di iniziare è bene conoscere le basi della logica. All'interno del costrutto *se* ci sarà un test che può dare
due sole risposte: *vero* o *falso*. Niente mezze bugie o mezze verità.

La maggior parte dei confronti avverranno tra variabili, oppure tra variabili e numeri e saranno di questo tipo:

* **minore di** `a < b`
* **minore o uguale di** `<= b`
* **maggiore di** `a > b`
* **maggiore o uguale di** `a >= b`
* **uguale a** ` a == b`
* **diverso da** `a != b`

> [!TIP]
> **Attenzione** L'operatore `==` è un operatore di *confronto*, pertanto confronta i valori delle variabili `a` e `b`.
> Invece, se si scrive `a = b`, la variabile `a` riceve il valore della variabile `b` perché l'operatore `=` è un
> operatore di *assegnazione* e assegna a una variabile quello che c'è a destra del simbolo `=`.
>
> Esempio. `a = a + 1;` significa *incrementa la variabile `a` di una unità*. Sì, in matematica sarebbe un paradosso, ma
> è così che in informatica si modificano le variabili.

## if

Così si scrive un costrutto *if* che esegue un'azione **solo** in caso la *condizione* sia vera.

```cpp
if (condizione) {
  // codice che viene eseguito se la condizione e' vera
}
```

## else

Così si scrive un costrutto *if* che esegue un'azione quando la *condizione* è vera e un'altra quando la condizione è falsa.

```cpp
if (condizione) {
  // codice che viene eseguito se la condizione e' vera
}
else {
  // codice che viene eseguito se la condizione e' falsa
}
```

## else if

Con questa struttura si riescono ad analizzare due condizioni. Se la prima è vera si ha un'azione, se la seconda è vera
(ma la prima è falsa) un'altra. Se entrambe sono false un'altra ancora.

```cpp
if (condizione1) {
  // codice che viene eseguito se la condizione1 e' vera
}
else if (condizione2) {
  // codice che viene eseguito se la condizione1 e' falsa e la condizione2 e' vera
}
else {
  // codice che viene eseguito se la condizione1 e' falsa e la condizione2 e' falsa
}
```

## Forma breve

Questa è la forma per chi vuole risparmiare inchiostro: assegna un valore a una variabile a seconda della condizione, se vera
riceve un valore, altrimenti ne riceve un altro.

```cpp
variabile = (condizione) ? valoreSeVero : valoreSeFalso;
```

## Un esempio

Questo programma stabilisce, in base all'età, se una persona è maggiorenne o minorenne.

```cpp
#include <iostream>
using namespace std;

int main() {
  int anni;

  // Chiede l'età all'utente
  cout << "Dimmi quanti anni hai: ";
  cin >> anni;

  if (anni < 18) {
    cout << "Sei minorenne.";
  }
  else {
    cout << "Sei maggiorenne.";
  }
  return 0;
}
```

---
