/*
 * RilanciaDado.hpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef RILANCIADADO_H_
#define RILANCIADADO_H_
#include "Gioco.hpp"
#include "Carta.hpp"

class Rilancia_Dado : public Carta { //sottoclasse di carta

public:
	Rilancia_Dado();
    void effetto_carta(Gioco* gioco);
	virtual ~Rilancia_Dado();
};

#endif /* RILANCIADADO_H_ */
