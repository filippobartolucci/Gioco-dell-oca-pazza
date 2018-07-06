/*
 * Fortuna.hpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef FORTUNA_H_
#define FORTUNA_H_

#include "../../../Gop/src/Carta/Carta.hpp"

class Fortuna : public Carta { //sottoclasse di carta

public:

	Fortuna();
	void effetto_carta(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT);
    ~Fortuna();
};

#endif /* RILANCIADADO_H_ */
