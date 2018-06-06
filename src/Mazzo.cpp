/*
 * Mazzo.cpp
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#include <Mazzo.h>

#include "ScambiaPosizione.hpp"
#include "Fermounturno.h"
#include "TornaInizio.h"

elemento_mazzo* crea_elemento(){
	int tipo_carta = (rand()%TIPI_CARTE);
	elemento_mazzo* nuovo_elemento = new elemento_mazzo();//Valore di ritorno

	switch (tipo_carta) {
		case 0:
			nuovo_elemento->carta_corrente = new Fermo_un_turno();
		break;

		case 1:
			nuovo_elemento->carta_corrente = new Domanda();
		break;

		case 2:
			nuovo_elemento->carta_corrente = new Rilancia_Dado() ;
		break;

		case 3:
			nuovo_elemento->carta_corrente = new Scambia_Posizione();
		break;

		case 4:
			nuovo_elemento->carta_corrente = new TornaInizio();
		break;

		case 5:

		break;

	}
	return nuovo_elemento;
}

Mazzo::Mazzo(int num_carte){
	elemento_mazzo* precedente = NULL;

	if (num_carte < DEFAULT_NUM_CARTE){
		num_carte = DEFAULT_NUM_CARTE;
	}

	for(int i = 0; i < num_carte; i++){
		// 1 Crea elemento del mazzo
		elemento_mazzo* nuovo = crea_elemento();

		// 2 In coda alla lista
		if(i == 0){
			inizio = nuovo;
		}
		else {
			precedente->next = nuovo;
		}
		nuovo->next = NULL;
		precedente = nuovo;
	}
	fine = precedente; //puntatore all'ultimo elemento della lista
}

Mazzo::Mazzo(){
	Mazzo(DEFAULT_NUM_CARTE);
}

Carta* Mazzo::pesca(){
	elemento_mazzo* pescata = inizio;
	inizio = pescata->next;
	fine->next = pescata;
	pescata->next = NULL;
	fine = pescata;
	return pescata->carta_corrente;
}


