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

| Nota | Durata | Inserire | Simbolo |
|------|:----:|----:|:---:|
| semibreve | $1/1$ | 1 | ![](https://upload.wikimedia.org/wikipedia/commons/thumb/a/a0/Music-wholenote.svg/50px-Music-wholenote.svg.png) |
| minima | $1/2$ | 2 | ![](https://upload.wikimedia.org/wikipedia/commons/thumb/c/c1/Music-halfnote.svg/50px-Music-halfnote.svg.png) |
| semiminima | $1/4$ | 4 | ![](https://upload.wikimedia.org/wikipedia/commons/thumb/f/fb/Music-quarternote.svg/50px-Music-quarternote.svg.png) |
| croma | $1/8$ | 8 | ![](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5b/Music-eighthnote.svg/50px-Music-eighthnote.svg.png) |
| semicroma | $1/16$ | 16 | ![](https://upload.wikimedia.org/wikipedia/commons/thumb/5/57/Music-sixteenthnote.svg/50px-Music-sixteenthnote.svg.png) |
| biscroma | $1/32$ | 32 | ![](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b1/Music-thirtysecondnote.svg/50px-Music-thirtysecondnote.svg.png) |
| semibiscroma | $1/64$ | 64 | ![](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b0/Sixtyfourth-note.svg/50px-Music-Sixtyfourth.svg.png) |

Se si devono inserire punti di valore (per aumentare la durata della nota della sua metà) è sufficiente inserire il suo valore ma negativo.

Un esempio è il jingle di Pac-Man:
 
![Pacman score](https://upload.wikimedia.org/score/k/6/k6rft9h0oedfwmdse0imitapqig06ja/k6rft9h0.png "Pacman score")

# Hardware

Ecco lo schema di montaggio:

<p float="left">
  <img src="music_bb.png" width="45%" />
  <img src="music_hardware.jpg" width="45%" /> 
</p>

Il montaggio è estremamente semplice: una volta inserita la cicalina piezoelettrica alla scheda e il gioco è fatto. Nel progetto la scelta del pin 11 non è casuale, ma dettata dal fatto che è possibile connettere la maggior parte di questi dispositivi (in particolare i più economici) direttamente sulla scheda Arduino grazie al pin GND vicino al pin 11 senza alcun ulteriore cablaggio.

Naturalmente, è possibile utilizzare qualsiasi altro pin digitale. Basta ricordarsi di assegnare il numero del pin alla variabile `buzzer` nella linea 10 del codice.
