#ifndef tabellone_hpp
#define tabellone_hpp

#include <stdio.h>

#include "../../../Gop/src/Casella/casella.hpp"
#include "../../../Gop/src/giocatore/giocatore.hpp"
#include "../../../Gop/src/Mazzo/Mazzo.hpp"

#define MAX_DIM 100
using namespace std;

class tabellone {
private:
    
    // Vettore che contiene tutte le caselle del tabellone
    casella caselle[MAX_DIM];
    // Dimensione del vettore;
    int dim;
    string posGiocatori(giocatore* g[], int numG, int pos);
    
    
public:
    
    // Costruttore di default del
    tabellone();
    void stampaTabellone(giocatore* g[], int numG);
    
    int getDim();
    void effetto(giocatore* g[], int giocatoreCorrente, int n_giocatori, Mazzo* m);
    casella getCasella(int n);
};

#endif /* tabellone_hpp */
