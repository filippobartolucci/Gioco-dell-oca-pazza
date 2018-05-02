/*
 * Card.cpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#include "Carta.hpp"
#include <cstring>
#include <iostream>


Carta::Carta() {
	// TODO Auto-generated constructor stub
}

Carta::Carta(char const * mess){
	strcpy(this->__messaggio , mess);
}

void Carta::setMessaggio(char const * mess){
	strcpy(this->__messaggio , mess);
}

char* Carta::getMessaggio(){
	return this->__messaggio;
};

Carta::~Carta() {
	// TODO Auto-generated destructor stub
}
