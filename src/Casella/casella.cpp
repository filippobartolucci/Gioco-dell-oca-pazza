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
    this->tipo=Vuota;
}

void casella::setArrivo(){
    this->tipo=Arrivo;
}

void casella::effetto(){
    switch (this->tipo) {
        
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
tipo casella::getTipo(){
    return this->tipo;
}
