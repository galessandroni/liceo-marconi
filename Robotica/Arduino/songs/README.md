# Musica maestro! ♪♫

## Utilizzo

I codici che segue - per il suo funzionamento - si basa esclusivamente sulla funzione `tone()` di Arduino, pertanto il risultato non sarà degno
di un'orchestra sinfonica. L'aspetto positivo è che non necessita di nessuna libreria.

Per rendere più semplice la scrittura di ulteriori melodie e la comprensione di
quelle già inserite si è proceduto col seguente schema:

* la scrittura di una libreria `pitches.h` contenente tutte le note musicali;
* la scrittura di un'ulteriore libreria `nome-melodia.h` da includere nel codice per eseguire la melodia desiderata;
* infine, il codice stesso, che esegue la melodia una sola volta, inserendola nel `setup`.

Pertanto, per il suo corretto funzionamento, ogni cartella dovrà essere strutturata come segue:

```tree
music
├── pitches.h
├── nome-melodia.h
└── music.ino
```

e, naturalmente, ricordarsi di controllare queste due linee all'inizio del codice:

```arduino
#include "pitches.h"
#include "nome-melodia.h"
```

modificando `nome-melodia.h` con `happy-birthday.h` o il nome della melodia desiderata.

### `pitches.h`

Questo codice non deve essere modificato. Contiene tutte le frequenze delle note musicali e `REST`, $0~\text{Hz}$, utilizzato per le pause.

### `nome-melodia.h`

Questa libreria contiene:

* la variabile `tempo` (numero di battute al minuto che determinano la velocità di l'esecuzione della melodia);
* il vettore `melody[]`, contenente:
  * la nota musicale da eseguire;
  * la sua durata.

Riguardo la durata, questa viene espressa come nella notazione nusicale dove i valori ammessi sono:

| Nota | durata |
|------|--------:|
| semibreve | 1 |
* minima 2
* semiminima 4
* croma 8
* semicroma 16
* biscroma 32
* semibiscroma 64
