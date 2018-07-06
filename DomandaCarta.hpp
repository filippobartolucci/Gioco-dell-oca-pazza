/*
 * DomandaCarta.hpp
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#ifndef GIOCO_DELL_OCA_PAZZA_SRC_CARTA_DOMANDA_H_
#define GIOCO_DELL_OCA_PAZZA_SRC_CARTA_DOMANDA_H_

#include "../../../Gop/src/Carta/Carta.hpp"


using namespace std;

class DomandaCarta : public Carta {
public:

	DomandaCarta();
	void effetto_carta(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT);
	~DomandaCarta();
};

#endif /* GIOCO_DELL_OCA_PAZZA_SRC_CARTA_DOMANDA_H_ */
