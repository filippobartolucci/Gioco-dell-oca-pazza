/*
 * Mazzo.h
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#ifndef GIOCO_DELL_OCA_PAZZA_SRC_MAZZO_MAZZO_H_
#define GIOCO_DELL_OCA_PAZZA_SRC_MAZZO_MAZZO_H_

#include "../Carta/Carta.hpp"

#define DEFAULT_NUM_CARTE 40

class Mazzo {

	private:
		Carta* cima;
		Carta* fondo;
		Carta* crea_elemento();

	public:
		Mazzo();
		Mazzo(int num_carte);
		void pesca(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT);
		virtual ~Mazzo();


};

#endif /* GIOCO_DELL_OCA_PAZZA_SRC_MAZZO_MAZZO_H_ */
