/*********************************************************
 * servo-pot.ino                                         *
 *                                                       * 
 * Controllo di un servomotore tramite potenziometro     *
 *********************************************************/

#include <Servo.h>

// Nome del servomotore
Servo myServo;

// Variabile di appoggio per l'angolo della servomotore
int ang = 0;
// Pin connesso al servomotore
int pinServo = 9;
// Pin connesso al potenziometro
int pinPot = A0;
// Ritardo tra un'azione e la successiva (in millisecondi)
int rit = 15;

void setup() {
  // Definisco quale pin controlla la sbarra
  myServo.attach(pinServo);

  // Alza la sbarra da 0 a 90° a intervalli di 1°
  for (ang = 0; ang <= 90; ang++) {
    // Assegna l'angolo alla sbarra
    myServo.write(ang);
    // Attende quanto specificato
    delay(rit);
  }

  // Abbassa la sbarra da 90 a 0° a intervalli di 1°
  for (ang = 90; ang >= 0; ang--) {
    // Assegna l'angolo alla sbarra
    myServo.write(ang);
    // Attende quanto specificato
    delay(rit);
  }
}

void loop() {
  // Legge la tensione presente sul potenziometro (0 - 5 V -> 0 - 1023)
  ang = analogRead(pinPot);
  // Converte la lettura in gradi, compresi tra 0 e 180
  ang = map(ang, 0, 1023, 0, 180);
  // Porta il servomotore all'angolo come da lettura
  myServo.write(ang);
  // Attende quanto specificato
  delay(rit);
}
