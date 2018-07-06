/*
 * TornaInizio.cpp
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#include <src/Carta/TornaInizio.h>

TornaInizio::TornaInizio():Carta ("Torna alla partenza ") {

}
void TornaInizio::effetto_carta(Gioco *gioco){
	gioco->get_giocatore_attivo()->setPos(0);
}

TornaInizio::~TornaInizio() {
	// TODO Auto-generated destructor stub
}

