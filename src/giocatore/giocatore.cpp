//
//  Giocatore.cpp
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.

#include "giocatore.hpp"
#include "Dado.hpp"

giocatore::giocatore(char n[MAX_CHAR_NAME], int numColore){
    strcpy(this->nome, n);
    setPos(0);
    this->colore=setColor(numColore);
}

//Creo le funzioni per il giocatore

string giocatore::getNome(){
    return (this->colore + this->nome + setDefault());
}

string giocatore::getColore(){
    return this->colore;
}

void giocatore::setPos(int p){
    this->posizione = p;
}

int giocatore::getPos(){
    return this->posizione;
}

void giocatore::saltaTurno(){
    fermo = true;
}
