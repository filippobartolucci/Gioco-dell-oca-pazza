/*
 * ScambiaPosizione.h
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef SCAMBIAPOSIZIONE_H_
#define SCAMBIAPOSIZIONE_H_
#include "Card.h"

class Scambia_Posizione : public Carta {

private:
	char messaggio[lung];

public:
	Scambia_Posizione();
	// void effetto_carta(Gioco* gioco)
	virtual ~Scambia_Posizione();
};

#endif /* SCAMBIAPOSIZIONE_H_ */
