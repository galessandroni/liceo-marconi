#include <iostream>
using namespace std;

// Definizione situazione standard (colore bianco, sfondo nero e nessuna formattazione)
#define RESET   "\x1b[0m"

// Definizioni dei colori
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"

// Definizioni degli sfondi
#define RED_GB    "\033[41m"
#define GREEN_GB  "\033[42m"

// Definisco le formattazioni
#define BOLD      "\033[1m"
#define ITALIC    "\033[3m"
#define UNDERLINE "\033[4m"
#define SPOILER   "\033[8m"

int main () {

  cout << RESET   << "Questo testo e' BIANCO!"  << RESET << "\n";
  cout << RED     << "Questo testo e' ROSSO!"   << RESET << "\n";
  cout << GREEN   << "Questo testo e' VERDE!"   << RESET << "\n";
  cout << YELLOW  << "Questo testo e' GIALLO!"  << RESET << "\n";
  cout << BLUE    << "Questo testo e' BLU!"     << RESET << "\n";
  cout << MAGENTA << "Questo testo e' MAGENTA!" << RESET << "\n";
  cout << CYAN    << "Questo testo e' CIANO!"   << RESET << "\n";

  cout << RED_GB   << "Questo testo e' BIANCO su sfondo ROSSO!"  << RESET << "\n";
  cout << GREEN_GB << "Questo testo e' BIANCO su sfondo VERDE!"  << RESET << "\n";

  cout << BOLD      << "Questo testo e' in grassetto"  << RESET << "\n";
  cout << ITALIC    << "Questo testo e' in corsivo"  << RESET << "\n";
  cout << UNDERLINE << "Questo testo e' sottolineato"  << RESET << "\n";
  cout << RESET     << "Il colpevole e' il " << SPOILER << "maggiordomo" << RESET ".\n";

  cout << "\n\n";

    // Per chi vuole esagerare...

    int i, j, n;

    for (i = 0; i < 11; i++) {
        for (j = 0; j < 10; j++) {
            n = 10 * i + j;
            if (n > 108) break;
            printf("\033[%dm %3d\033[m", n, n);
        }
        cout << "\n";
    }

  return 0;
}

// Per le definizioni di tutti i colori si veda https://en.wikipedia.org/wiki/ANSI_escape_code
