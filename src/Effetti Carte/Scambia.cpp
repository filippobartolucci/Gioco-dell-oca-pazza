/*
 * Scambia.cpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#include "Scambia.hpp"
#include <cstring>
#include <iostream>

Scambia::Scambia() : Carta("Scambia posizione"){
}

void Scambia::effetto_carta(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT)
{
	int max = -1;
	giocatore * daScambiare = NULL;

	for(int i = 0; i < n_giocatori; i++){
		if(max < g[i]->getPos() && i != giocatoreCorrente){
			max = g[i]->getPos();
			daScambiare = g[i];
		}
	}
	daScambiare->setPos(g[giocatoreCorrente]->getPos());
	g[giocatoreCorrente]->setPos(max);
}

Scambia::~Scambia(){;}

