/******************************************************************************

Creazione della classe genitore Rettangolo e della classe figlio Parallelepipedo
Tramite la classe Rettangolo restituiamo area e perimetro
Tramite la classe Parallelepipedo restituiamo superficie e volume

*******************************************************************************/
#include <iostream>
using namespace std;

// Classe genitore
class Rettangolo {
  public: 
    float base, altezza;
    float area() {
        return base * altezza ;
    }
    float perimetro() {
        return (base + altezza) * 2;
    }
};

// Classe figlio
class Parallelepipedo: public Rettangolo {
  public: 
    float profondita;
    float superficie() {
        return perimetro() * profondita + area() * 2;
    }
    float volume() {
        return area() * profondita;
    }
};

int main()
{
    cout << "Calcolo della superficie e del volume di un parallelepipedo.\n\n";

    Parallelepipedo figura;
    
    cout << "Inserire la base (cm): ";
    cin >> figura.base;
    cout << "Inserire l'altezza' (cm): ";
    cin >> figura.altezza;    
    cout << "Inserire la profondita' (cm): ";
    cin >> figura.profondita;    
    
    cout << "\nIl volume del parallelepipedo e' pari a: " << figura.volume() << " cm^3.\n";
    cout << "La superficie del parallelepipedo e' pari a: " << figura.superficie() << " cm^2.\n";    

    return 0;
}
