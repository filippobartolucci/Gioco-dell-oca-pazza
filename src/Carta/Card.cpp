/*
 * Card.cpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#include "Card.h"
#include <cstring>
#include <iostream>


Carta::Carta() {
	// TODO Auto-generated constructor stub

}

Carta::Carta(char* mess){
	strcpy(this->messaggio , mess);
}

void Carta::setMessaggio(char* mess){
	strcpy(this->messaggio , mess);
}

char* Carta::getMessaggio(){
	return this->messaggio;
};

/*
voidCarta::effetto_carta(Gioco* gioco){

} */

Carta::~Carta() {
	// TODO Auto-generated destructor stub
}
