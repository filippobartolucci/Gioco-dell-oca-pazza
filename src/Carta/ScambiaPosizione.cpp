/*
 * ScambiaPosizione.cpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#include "ScambiaPosizione.h"

Scambia_Posizione::Scambia_Posizione() : Carta() {
	// TODO Auto-generated constructor stub
    strcpy(this->messaggio , "Scambia la posizione con il giocatore a te successivo");
	setMessaggio(this->messaggio);

}

/*
 void Scambia_Posizione::effetto_carta(Gioco* gioco){

 }
  */

Scambia_Posizione::~Scambia_Posizione() {
	// TODO Auto-generated destructor stub
}

