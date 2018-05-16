//  casella.cpp

#include "casella.hpp"
#include <cstdlib>
#include <iostream>

#define spostamento 5

casella::casella(){
    int n=(rand() % 8) + 1;
    switch (n) {
            
        case (4):
            this->tipo=Avanti;
            break;
        
        case (5):
            this->tipo=Indietro;
            break;
            
        case (6):
            this->tipo=Pesca;
            break;
            
        case (7):
            this->tipo=Fermo;
            break;
            
        case (8):
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


tipo casella::getTipo(){
    return this->tipo;
}

string casella::getNomeTipo(){
    switch (this->tipo) {
        case Inizio:
            return "Inizio  ";
            break;
            
        case Vuota:
            return "Vuota   ";
            break;
            
        case Avanti:
            return "Avanti  ";
            break;
            
        case Indietro:
            return "Indietro";
            break;
            
        case Pesca:
            return "Pesca   ";
            break;
            
        case Fermo:
            return "Fermo   ";
            break;
            
        case Domanda:
            return "Domanda ";
            break;
            
        case Arrivo:
            return "Arrivo  ";
            break;
    }
}
