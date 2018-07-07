/*
 * Scambia.hpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef SCAMBIA_H_
#define SCAMBIA_H_

#include "Carta.hpp"

class Scambia : public Carta { //sottoclasse di carta

public:

	Scambia();
	void effetto_carta(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT);
    ~Scambia();
};

#endif /* Scambia_H_ */
