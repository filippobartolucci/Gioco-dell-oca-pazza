/*
 * TornaInizio.cpp
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#include "TornaInizio.hpp"

TornaInizio::TornaInizio():Carta ("Torna alla partenza ") {
}

void TornaInizio::effetto_carta(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT)
{
	g[giocatoreCorrente]->setPos(0);
}

TornaInizio::~TornaInizio() {;}


