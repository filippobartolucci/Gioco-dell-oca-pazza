/*
 * RilanciaDado.h
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef RILANCIADADO_H_
#define RILANCIADADO_H_
#include "Card.h"
class Rilancia_Dado : public Carta { //sottoclasse di carta

private:
	char messaggio[lung];

public:
	Rilancia_Dado();
   // void effetto_carta(Gioco* gioco)
	virtual ~Rilancia_Dado();
};

#endif /* RILANCIADADO_H_ */
