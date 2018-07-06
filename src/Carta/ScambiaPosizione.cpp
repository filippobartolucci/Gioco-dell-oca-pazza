/*
 * ScambiaPosizione.cpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#include "ScambiaPosizione.hpp"
#include <cstring>
#include <iostream>

Scambia_Posizione::Scambia_Posizione() : Carta("Scambia la posizione con il giocatore a te successivo") {
}

void Scambia_Posizione::effetto_carta(Gioco* gioco){
	int max = 0;
	int g_max = 0; //indice del giocatore da scambiare nella lista giocatori

	/* Cerco il giocatore con cui scambiare */
	for(int i = 0; i < gioco->get_n_giocatori(); i++){
		if(max < gioco->get_lista_giocatori()[i].posizione &&
				strcmp(gioco->get_giocatore_attivo()->nome, gioco->get_lista_giocatori()[i].nome)){
			max = (gioco->get_lista_giocatori())[i].posizione;
			g_max = i;
		}
	}

	/* Scambio */
	gioco->get_lista_giocatori()[g_max].posizione = gioco->get_giocatore_attivo()->posizione; // scambia gmax con giocatore corrente

	gioco->get_giocatore_attivo()->posizione = max;
}


Scambia_Posizione::~Scambia_Posizione() {
	// TODO Auto-generated destructor stub
}

