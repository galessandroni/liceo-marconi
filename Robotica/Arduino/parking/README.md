# Misurazione della distanza con sensore a ultrasuoni

In questa sezione  viene illustrato come utilizzare il [sensore a ultrasuoni HC-SR04](https://cdn.datasheetspdf.com/pdf-down/H/C/-/HC-SR04-ETC.pdf) con Arduino per misurare distanze e - di conseguenza - rilevare ostacoli.

Questo dispositivo viene ampiamente utilizzato nell'ambito della robotica, come è facile intuire, o - più semplicemente - nella sensoristica ogni volta che si rende necessario individuare ostacoli, soprattutto per la prevenzione degli infortuni. Se - invece - si vuole realizzare qualcosa di più articolato e canticchiare ''Il pipistrello come fa?'' (parafrasando una celebre canzone dello Zecchino d'oro), allora questo diventerà il componente chiave di un [radar](https://it.wikipedia.org/wiki/Radar) rudimentale.

Il sensore HC-SR04, nelle sue specifiche tecniche, dichiara di poter rilevare la presenza di un ostacolo quando questo si trova tra 2 centimetri e 4 metri di distanza, con un margine di errore di 3 millimetri. Utilizza una frequenza di lavoro pari a $40~\text{kHz}$, pertanto la sua lunghezza d'onda approssimativa è di poco inferiore al centimetro (l'ordine di grandezza degli oggetti che si intende individuare).

Infine, l'oggetto da individuare deve essere collocato in un angolo non superiore a $15~{}^\circ$, rispetto al suo asse.

## Prerequisiti

<a title="Giacomo Alessandroni, CC BY-SA 4.0 &lt;https://creativecommons.org/licenses/by-sa/4.0&gt;, via Wikimedia Commons" href="https://commons.wikimedia.org/wiki/File:Bat_bug_eco.svg"><img align="right" width="512" alt="Bat bug eco" src="https://upload.wikimedia.org/wikipedia/commons/thumb/e/e3/Bat_bug_eco.svg/512px-Bat_bug_eco.svg.png"></a>

Di seguito verranno riepilogati tutti i concetti di fisica classica che ''dovrebbero'' essere noti a uno studente (o ignoti, se questa esperienza venisse proposta nelle scuole primarie).

L'eco si verifica quando un suono incontra un oggetto di dimensioni proporzionali alla sua lunghezza d'onda (simbolo $\lambda$). In questo caso, si ha:

$$\lambda=\frac{c}{f}=\frac{343~\text{m/s}}{40~\text{kHz}}\simeq 8,58~\text{mm}$$

Fortunatamente, nel mondo reale, tutto è molto più semplice. Questo approccio serve soltanto per illustrare che non tutti gli oggetti saranno individuabili, che l'eco (quando si urla a una montagna) si verifica poiché sussistono determinate condizioni e... i pipistrelli, per procacciarsi il loro cibo, emettono frequenze con lunghezze d'onda della dimensione degli insetti. Solo queste verranno riflesse e... buon appetito.

In questo caso, la cosa più interessante è la distanza <math>d</math> del bersaglio, che si calcola come segue:

$$d=c \cdot t$$

dove $c$ è la velocità del suono, che si considera costante, pari a $c=343~\text{m/s}$. Tuttavia il dispositivo scelto, Arduino, non utilizza le unità di misura del [Sistema Internazionale](https://it.wikiversity.org/wiki/Il_sistema_internazionale_di_unit%C3%A0_di_misura_(superiori)) ma, per la misurazione del tempo, utilizza i microsecondi e (per nostro comodo) la distanza verrà espressa in centimetri.

Pertanto, con un'opportuna equivalenza, la velocità del suono diventa:

$$c = 343~\text{m/s}=343~\text{m/s} \frac{10^2~\text{cm/m}}{10^6~\mu\text{s/s}}= 0,0343~\text{cm/}\mu\text{s}$$

Quest'equivalenza è fondamentale per comprendere la linea 14 del codice.

## Schema di montaggio

<a title="Giacomo Alessandroni, CC BY-SA 4.0 &lt;https://creativecommons.org/licenses/by-sa/4.0&gt;, via Wikimedia Commons" href="https://commons.wikimedia.org/wiki/File:Sensore_di_prossimit%C3%A0_1.svg"><img align="right" width="512" alt="Sensore di prossimità 1" src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/11/Sensore_di_prossimit%C3%A0_1.svg/512px-Sensore_di_prossimit%C3%A0_1.svg.png"></a>

Di seguito si supporrà la velocità del suono nell'aria costante, pertanto, avente velocità $c$ pari a $c=343~\text{m/s}$. Questa è la velocità del suono a $20~{}^\circ\text{C}$. 

Questo significa che, se si riesce a comprendere il codice, lo schema di montaggio è composto soltanto dal microcontrollore Arduino, dal sensore di prossimità HC-SR04 e - letteralmente - quattro fili. 

Si noti che la [breadboard](https://it.wikiversity.org/wiki/Breadboard) è facoltativa (i cavi potrebbero essere connessi direttamente al sensore). È invece opportuna in due contesti: 

1. quando si desidera una discreta accuratezza nella misurazione delle distanze;
1. quando, oltre al sensore di prossimità, si desiderano inserire anche altri componenti.

Naturalmente, nello schema di montaggio, l'alimentazione di Arduino è sottintesa, poiché l'output viene mostrato nel calcolatore. 

Lo schema di montaggio, come visibile in figura, è estremamente semplice. Il sensore deve essere alimentato e la sua alimentazione - $V_{cc}=5~\text{V}$, filo rosso, e $GND = 0~\text{V}$ - filo nero sono fornite da Arduino.

Il sensore ha altri due pedini, uno chiamato <code>trigger</code>, al quale si invia un impulso di $10~\mu \text{s}$ per far partire l'impulso. Dopodiché vi è un secondo pedino, chiamato <code>echo</code>, che restituisce il tempo impiegato dal segnale a raggiungere il bersaglio (e ritornare). Pertanto, nel calcolo della distanza, questo tempo dovrà essere diviso per 2.

> Si è detto che la portata di questo sensore è $4~\text{m}$. Questo implica che dopo un tempo di attesa <math>t</math> pari, o superiore, a
> $$t=2\frac{d_{max}}{c}=2\frac{4~\text{m}}{343~\text{m/s}}\simeq 24~\text{ms}$$
> l'oggetto è fuori scala, ovvero oltre la distanza massima in cui può essere intercettato.

## Codice

Di seguito il codice utilizzato per visualizzare nel monitor seriale la distanza degli oggetti localizzati dal sensore.

Da sottolineare che - per l'utilizzo di questo sensore - non è stato necessario includere nessuna libreria. È sufficiente stimare il tempo in cui <code>echo</code> si porta a livello alto. Per far questo viene utilizzata la funzione <code>pulseIn</code> che risponde esattamente a questo scopo, [come da documentazione ufficiale di Arduino](https://www.arduino.cc/reference/it/language/functions/advanced-io/pulsein/).

```cpp
/**************************************************************
 *  CONTROLLO DEL SENSORE DI PROSSIMITA' HR-SC04              *
 *                                                            *
 *  Questo codice riceve i dati provenienti dal sensore di    *
 *  prossimita' HR-SC04, li analizza e li mostra a video nel  *
 *  monitor seriale.                                          *
 **************************************************************/

// Definizione dei pin trigger ed echo
#define trigger 2
#define echo 3

// Definizione della velocita' del suono (centimetri / microsecondo)
#define c 0.0343

// Definizione delle variabili
long tempo;
float spazio;

void setup() {
  // Definizione di input e output
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);

  // Inizializzazione della comunicazione seriale
  Serial.begin(9600);
}

void loop() {
  // Prima della misurazione si porta trigger a livello basso
  digitalWrite(trigger, LOW);
  delayMicroseconds(5);

  // Invio di un impulso (porta trigger a livello alto per 10 microsecondi)
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  // Lettura di echo, tramite pulseIn, che restituisce la durata dell'impuso (in microsecondi)
  // Il dato acquisito viene poi diviso per 2 (andata e ritorno)
  tempo = pulseIn(echo, HIGH) / 2;
  // Calcolo della distanza in centimetri
  spazio = tempo * c;

  // spazio viene visualizzata nel monitor seriale ([Ctrl] + [Maiusc] + M)
  // approssimata alla prima cifra decimale
  Serial.print("Distanza = " + String(spazio, 1) + " cm\n");

  delay(50);
}
```

## Espansioni suggerite

Questo progetto si presta a numerose espansioni.

* In primo luogo qui si è ipotizzata la velocità del suono costante. Non è così: la velocità del suono varia al variare della temperatura. Pertanto si può migliorare il risultato inserendo un sensore di temperatura e - attraverso la temperatura acquisita - determinare la velocità del suono e una stima della posizione del bersaglio migliore.
* Questi parametri possono essere mostrati mediante un display: così facendo non sarà più necessario l'utilizzo del computer.
* Similmente - anzi, più semplicemente - possono essere espressi tramite segnali acustici, realizzando un vero e proprio sensore di parcheggio.
* Infine, il sensore di prossimità può essere collocato al di sopra di un servomotore, così da simulare il comportamento di un radar. Quest'ultima applicazione è particolarmente suggestiva se si dispone di una [stampante 3D](https://it.wikipedia.org/wiki/Stampa_3D) con la quale stampare un supporto analogo a quello di un radar.
