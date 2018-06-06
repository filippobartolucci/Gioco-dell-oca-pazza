/*
 * TornaInizio.h
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#ifndef GIOCO_DELL_OCA_PAZZA_SRC_CARTA_TORNAINIZIO_H_
#define GIOCO_DELL_OCA_PAZZA_SRC_CARTA_TORNAINIZIO_H_

#include "Gioco.hpp"
#include "Carta.hpp"

class TornaInizio : public Carta {
public:

	TornaInizio();
	void effetto_carta(Gioco* gioco);
	virtual ~TornaInizio();
};

#endif /* GIOCO_DELL_OCA_PAZZA_SRC_CARTA_TORNAINIZIO_H_ */
