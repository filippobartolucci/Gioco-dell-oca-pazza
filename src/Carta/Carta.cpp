/*
 * Card.cpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#include "../Carta/Carta.hpp"
#include <cstring>
#include <iostream>

Carta::Carta(char const * mess){
	strcpy(this->messaggio , mess);
	this->next = NULL;
}

void Carta::setMessaggio(char const * mess){
	strcpy(this->messaggio , mess);
}

char* Carta::getMessaggio(){
	return this->messaggio;
};

Carta::~Carta() {;}
void Carta::effetto_carta(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT){;}

