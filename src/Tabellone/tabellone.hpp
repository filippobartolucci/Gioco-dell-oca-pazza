#ifndef tabellone_hpp
#define tabellone_hpp

#include <stdio.h>
#include "casella.hpp"

// Il Tabellone è salvato in una lista
// c è la classe della singola casella
// next è il puntatore al record successivo
struct tabellone {
    casella c;
    tabellone* next;
};
// definizione del tipo tabellone, puntatore al record tabellone
typedef tabellone *tab;

// Inizializzazione del tabellone, il numero di caselle è generato casualmente
tab initTabellone ();

// Stampa delle caselle 
void stampaTabellone(tab t);


#endif /* tabellone_hpp */
