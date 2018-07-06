/*
 * Fermounturno.h
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#ifndef GIOCO_DELL_OCA_PAZZA_SRC_CARTA_FERMOUNTURNO_H_
#define GIOCO_DELL_OCA_PAZZA_SRC_CARTA_FERMOUNTURNO_H_

#include "Gioco.hpp"
#include "Carta.hpp"


class Fermo_un_turno : public Carta  {
public:
	Fermo_un_turno();
	void effetto_carta(Gioco* gioco);
	virtual ~Fermo_un_turno();
};

#endif /* GIOCO_DELL_OCA_PAZZA_SRC_CARTA_FERMOUNTURNO_H_ */
