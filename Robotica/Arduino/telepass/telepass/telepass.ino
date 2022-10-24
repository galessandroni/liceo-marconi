/***************************************************************
 * SIMULAZIONE DI UN PARCHEGGIO/TELEPASS                       *
 *                                                             *
 * Questo codice riceve i dati provenienti dal sensore di      *
 * prossimita' HC-SR04, li analizza e, se rispondono a criteri *
 * prestabiliti, fa suonare una cicalina, alza la sbarra del   *
 * parcheggio, attende che il veicolo sia transitato, abbassa  *
 * la sbarra del parcheggio e suona nuovamente la cicalina.    *
 *                                                             * 
 * 3P, Liceo Scientifico "G. Marconi", Pesaro                  *
 * 24 ottobre 2022                                             *
 ***************************************************************/

// Libreria per l'utilizzo del servomotore
#include <Servo.h>

// Definizione dei pin trigger ed echo del sensore di prossimita'
#define trigger 2
#define echo 3

// Definizione della velocita' del suono (centimetri / microsecondo)
#define c 0.0343

// Definizione del servomotore
Servo sbarra;

// Inclinazione iniziale della sbarra
int angStart = 0;
// Inclinazione finale della sbarra
int angEnd = 90;
// Variabile di appoggio per l'angolo della sbarra
int ang = 0;
// Pin di connessione alla sbarra
int pinSbarra = 9;
// Ritardo tra un'azione e la successiva
int rit = 15;
// Pin di connessione alla cicalina
int pinBeep = 12;
// Durata del beep (in millisecondi)
int timeBeep = 400;
// Frequenza del beep per l'elevazione della sbarra
int freqBeep1 = 440;
// Frequenza del beep per l'abbassamento della sbarra
int freqBeep2 = 220;
// Mantiene la sbarra in alto per 3 secondi
int tempoAlto = 3000;

// Definizione delle variabili per la stima della distanza
// del veicolo
long tempo;
float spazio;
// Distanza minima e massima del veicolo dal sensore
int distMin = 2;
int distMax = 6;

void setup() {
  // Definizione di quale pin controlla la sbarra
  sbarra.attach(pinSbarra);
  // Definizione di input e output
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  // Prima della misurazione si porta trigger a livello basso
  digitalWrite(trigger, LOW);
  delayMicroseconds(5);

  // Invia di un impulso (porta trigger a livello alto per 10 microsecondi)
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  // Lettura di echo, tramite pulseIn, che restituisce la durata
  // dell'impuso (in microsecondi), poi diviso per 2 (andata e ritorno)
  tempo = pulseIn(echo, HIGH) / 2;
  // Calcolo della distanza in centimetri
  spazio = tempo * c;
  if (spazio > distMin && spazio < distMax) {
    // Segnale acustico di sbarra alzata
    tone(pinBeep, freqBeep1, timeBeep);
    delay(timeBeep);
    noTone(pinBeep);
    // Alza la sbarra a intervalli di 1°
    for (ang = angStart; ang <= angEnd; ang++) {
      // Assegna l'angolo alla sbarra
      sbarra.write(ang);
      // Attende quanto specificato
      delay(rit); 
    }    
    // Attende che l'automobile passi
    delay(tempoAlto);
    // Abbassa la sbarra a intervalli di 1°
    // Segnale acustico di sbarra abbassata
    tone(pinBeep, freqBeep2, timeBeep);
    delay(timeBeep);
    noTone(pinBeep);
    for (ang = angEnd; ang >= angStart; ang--) {
    // Assegna l'angolo alla sbarra
    sbarra.write(ang);
    // Attende quanto specificato
    delay(rit);
    }
  }
  // Attende 50 millisecondi prima di eseguire un'altra
  // misurazione
  delay(50);
}
