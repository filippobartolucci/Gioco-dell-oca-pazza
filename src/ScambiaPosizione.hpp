/*
 * ScambiaPosizione.h
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef SCAMBIAPOSIZIONE_H_
#define SCAMBIAPOSIZIONE_H_

#include "Gioco.hpp"
#include "Carta.hpp"

class Scambia_Posizione : public Carta {

public:
	Scambia_Posizione();
	void effetto_carta(Gioco* gioco);
	virtual ~Scambia_Posizione();
};

#endif /* SCAMBIAPOSIZIONE_H_ */
