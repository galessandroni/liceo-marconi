/********************************************************************
 * led.ino                                                          *
 *                                                                  *
 * Controllo di un diodo led tramite tastiera                       *
 ********************************************************************/

// Pin per il diodo led (NB la scheda Arduino ha un led incorporato corrispondente al pin 13)
#define led 13
// Velocità di comunicazione con la porta seriale (che legge e scrive, non come i carabinieri)
#define bitrate 9600

// Tasti per manovrare il Led
const char keyOn  = 'a';
const char keyOff = 's';

// Dato acquisito dalla porta seriale
char tastiera;

void setup() {
  // Inizializza la porta seriale alla velocità specificata
  Serial.begin(bitrate);
  // Definisce il pin del diodo led come uscita
  pinMode(led, OUTPUT);
}
void loop() {
  // Legge i dati provenienti dalla porta seriale
  tastiera = Serial.read();
  switch(tastiera){
    // Se deve accendere il led lo accende
    case keyOn:
      digitalWrite(led, HIGH);
      break;
    // Se deve spegnere il led lo spegne
    case keyOff:
      digitalWrite(led, LOW);
      break;
    // Tutto il resto viene ignorato
    default:
      Serial.flush();
      break;
  }
}