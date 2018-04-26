//  casella.cpp

#include "casella.hpp"
#include <cstdlib>
#include <iostream>


casella::casella(){
    int n=(rand() % 13) + 1;
    switch (n) {
            
        case (9):
            this->tipo=Avanti;
            break;
        
        case (10):
            this->tipo=Indietro;
            break;
            
        case (11):
            this->tipo=Pesca;
            break;
            
        case (12):
            this->tipo=Fermo;
            break;
            
        case (13):
            this->tipo=Domanda;
            break;
            
            
        default:
            this->tipo=Vuota;
            break;
    }
}

void casella::setInizio(){
    this->tipo=Inizio;
}

void casella::setArrivo(){
    this->tipo=Arrivo;
}


void casella::effetto(){
    switch (this->tipo) {
        case Inizio:
            
            break;
        
        case Vuota:
            std::cout<<"Casella Vuota"<<endl;
            break;
        
        case Avanti:
            
            break;
        
        case Indietro:
            
            break;
            
        case Pesca:
            
            break;
            
        case Fermo:
            
            break;
            
        case Domanda:
            
            break;
            
        case Arrivo:
            
            break;
        
    }
    
    
    
    
}

string casella::getNomeTipo(){
    switch (this->tipo) {
        case Inizio:
            return "Inizio";
            break;
            
        case Vuota:
            return "Vuota";
            break;
            
        case Avanti:
            return "Avanti";
            break;
            
        case Indietro:
            return "Indietro";
            break;
            
        case Pesca:
            return "Pesca";
            break;
            
        case Fermo:
            return "Vuota";
            break;
            
        case Domanda:
            return "Domanda";
            break;
            
        case Arrivo:
            return "Arrivo";
            break;
    }
}
