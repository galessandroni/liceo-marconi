/*********************************************************
 * servo.ino                                             *
 * Codice di test per un servomotore                     *
 *                                                       *
 *********************************************************/

#include <Servo.h>

// Definisco come richiamo il mio servomotore
Servo sbarra;

// Variabile di appoggio per l'angolo della sbarra
int ang = 0;
// Pin di connessione alla sbarra
int pinSbarra = 9;
// Ritardo tra un'azione e la successiva
int rit = 15;

void setup() {
  // Definisco quale pin controlla la sbarra
  sbarra.attach(pinSbarra);
}

void loop() {
  // Alza la sbarra da 0 a 90° a intervalli di 1°
  for (ang = 0; ang <= 90; ang++) {
    // Assegna l'angolo alla sbarra
    sbarra.write(ang);
    // Attende quanto specificato
    delay(rit);
  }

  // Abbassa la sbarra da 90 a 0° a intervalli di 1°
  for (ang = 90; ang >= 0; ang--) {
    // Assegna l'angolo alla sbarra
    sbarra.write(ang);
    // Attende quanto specificato
    delay(rit);
  }
}
