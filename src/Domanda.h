/*
 * Domanda.h
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#ifndef GIOCO_DELL_OCA_PAZZA_SRC_CARTA_DOMANDA_H_
#define GIOCO_DELL_OCA_PAZZA_SRC_CARTA_DOMANDA_H_

#include "Gioco.hpp"
#include "Carta.hpp"

using namespace std;

class Domanda : public Carta {
public:
	Domanda();
	void effetto_carta(Gioco* gioco);
	virtual ~Domanda();
};

#endif /* GIOCO_DELL_OCA_PAZZA_SRC_CARTA_DOMANDA_H_ */
