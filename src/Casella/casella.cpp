//  casella.cpp

#include <cstdlib>
#include <iostream>

#include "../Casella/casella.hpp"
#include "../Colors/Colors.hpp"

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

string casella::getNome(enum tipo tipo){
    switch(this->tipo){
            
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
            return "Pesca   ";
            break;
        case Fermo:
            return "Fermo   ";
            break;
        case Domanda:
            return "Domanda ";
            break;
        case Arrivo:
            return "Arrivo";
            break;
    }
}


string casella::getNomeTipo(){
    switch (this->tipo) {
        case Inizio:
            return (setGreen() + getNome(this->tipo) + setDefault());
            break;
            
        case Vuota:
            return getNome(this->tipo);
            break;
            
        case Avanti:
            return (setYellow() + getNome(this->tipo) + setDefault());
            break;
            
        case Indietro:
            return (setBlue() + getNome(this->tipo) + setDefault());
            break;
            
        case Pesca:
            return (setMagenta() + getNome(this->tipo) + setDefault());
            break;
            
        case Fermo:
            return (setRed() + getNome(this->tipo) + setDefault());
            break;
            
        case Domanda:
            return (setLightBlue() + getNome(this->tipo) + setDefault());
            break;
            
        case Arrivo:
            return (setGreen() + getNome(this->tipo) + setDefault());
            break;
    }
    return "";
}

