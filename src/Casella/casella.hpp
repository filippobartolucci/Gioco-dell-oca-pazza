//  casella.hpp

#ifndef casella_hpp
#define casella_hpp

#include <stdio.h>
#include <iostream>


using namespace std;

// Enumaration per gestire i vari tipi di caselle
enum tipo {
    Inizio,
    Vuota,
    Avanti,
    Indietro,
    Pesca,
    Fermo,
    Domanda,
    Arrivo,
};

class casella {
private:
    tipo tipo;
    
public:
    
    // Costruttore per le caselle
    // Ad ogni casella viene assegnato un tipo casualmente
    casella();
    
    
    // Cambio il tipo di una casella in "Vuota"
    // Necessario per inizializzare la prima casella del tabellone
    void setInizio();
    
    // Cambio il tipo di una casella in "Arrivo"
    // Necessario per inizializzare l'ultima casella del tabellone
    void setArrivo();
    
    enum tipo getTipo();
    string getNomeTipo();
};


#endif /* casella_hpp */
