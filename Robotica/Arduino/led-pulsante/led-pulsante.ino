// Assegnazione numerica dei pin
int pinBot = 12;
int pinLed = 13;

// Inizializzazione
void setup() {
  // Definizione dei pin
  pinMode(pinBot, INPUT);
  pinMode(pinLed, OUTPUT);
}

// Programma principale
void loop() {
  // Controllo lo stato del pulsante
  if (digitalRead(pinBot) == HIGH) {
    // se premuto accendo il led
    digitalWrite(pinLed, HIGH);
  }
  else {
    // altrimenti lo spengo
    digitalWrite(pinLed, LOW);
  }
}