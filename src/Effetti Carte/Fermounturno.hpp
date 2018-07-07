/*
 * Fermounturno.hpp
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#ifndef GIOCO_DELL_OCA_PAZZA_SRC_CARTA_FERMOUNTURNO_H_
#define GIOCO_DELL_OCA_PAZZA_SRC_CARTA_FERMOUNTURNO_H_

#include "../Carta/Carta.hpp"


class Fermo_un_turno : public Carta  {
public:

	Fermo_un_turno();
	void effetto_carta(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT);
    ~Fermo_un_turno();
};

#endif /* GIOCO_DELL_OCA_PAZZA_SRC_CARTA_FERMOUNTURNO_H_ */
