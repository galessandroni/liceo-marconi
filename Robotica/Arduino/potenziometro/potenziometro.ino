/********************************************************************
 * Potenziometro.ino                                                *
 *                                                                  *
 * Controllo di un motore in corrente continua                      *
 ********************************************************************/

// Ingresso analogico (campionato a 10 bit)
int analogPin = A0;

// Uscita analogica (campionata a 8 bit)
int motorPin = 6;

// Valore acquisito in ingresso                    
int val = 0;

void setup() {
  // Inizializzazione della porta seriale
  // così da poter vedere i dati acquisiti al computer
  Serial.begin(9600);
  // Il pin del motore è un'uscita
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Legge la posizione del potenziometro
  val = analogRead(analogPin);
  // Richiede al motore una potenza pari a quella impostata
  // L'uscita è a 8 bit => 2^10 / 2^8 anche oggi fa 4
  analogWrite(motorPin, val/4);
  // Invia il dato anche alla porta seriale (utile in fase di test)
  Serial.println(val);
}
