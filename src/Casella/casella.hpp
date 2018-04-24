//  casella.hpp

#ifndef casella_hpp
#define casella_hpp

#include <stdio.h>

using namespace std;

enum tipo {
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
    casella();
    void setInizio();
    void setArrivo();
    enum tipo getTipo();
    void effetto();
};


#endif /* casella_hpp */
