/*
 * Mazzo.cpp
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#include "../Mazzo/Mazzo.hpp"
#include "../Carta/Carta.hpp"
#include "../Effetti Carte/RilanciaDado.hpp"
#include "../Effetti Carte/Scambia.hpp"
#include "../Effetti Carte/Fortuna.hpp"
#include "../Effetti Carte/DomandaCarta.hpp"
#include "../Effetti Carte/Fermounturno.hpp"
#include "../Effetti Carte/TornaInizio.hpp"

Carta* Mazzo::crea_elemento(){
	int tipo_carta = (rand()%TIPI_CARTE);
	Carta* nuova_carta;

	switch (tipo_carta) {

		case 0:
			nuova_carta = new Fermo_un_turno();
		break;

		case 1:
			nuova_carta = new DomandaCarta();
		break;

		case 2:
			nuova_carta = new Rilancia_Dado() ;
		break;

		case 3:
			nuova_carta = new TornaInizio();
		break;

		case 4:
			nuova_carta = new Scambia();
		break;

		case 5:
		    nuova_carta = new Fortuna();
		break;

		default:
			nuova_carta = new Fermo_un_turno();
	}
	return nuova_carta; //temporaneo
}


Mazzo::Mazzo(int num_carte){
	if(num_carte < DEFAULT_NUM_CARTE){
		num_carte = DEFAULT_NUM_CARTE;
	}

	for (int i = 0; i < num_carte; i++){
		Carta* nuova = crea_elemento();

		//In coda alla lista
		if(i == 0)
			fondo = nuova;
		else
			nuova->next = cima;

		cima = nuova;
	}
}

Mazzo::Mazzo() : Mazzo(DEFAULT_NUM_CARTE){
}

void Mazzo::pesca(giocatore *g[], int giocatoreCorrente, int n_giocatori, int dimT){
	Carta* pescata = cima;

	/* Stampa Carta Pescata */
    cin.get();
    cout<<endl<<"Hai pescato la carta: "<< pescata->getMessaggio() <<endl;

	/* Applica Effetto */
    pescata->effetto_carta(g,giocatoreCorrente,n_giocatori,dimT);

    /*testing
    Carta *c = new DomandaCarta();
    c->effetto_carta(g,giocatoreCorrente,n_giocatori,dimT);

    c = new Fermo_un_turno();
    c->effetto_carta(g,giocatoreCorrente,n_giocatori,dimT);

    c = new Rilancia_Dado();
    c->effetto_carta(g,giocatoreCorrente,n_giocatori,dimT);

    c = new TornaInizio();
    c->effetto_carta(g,giocatoreCorrente,n_giocatori,dimT);

    c = new Scambia();
    c->effetto_carta(g,giocatoreCorrente,n_giocatori,dimT);

    c = new Fortuna();
    c->effetto_carta(g,giocatoreCorrente,n_giocatori,dimT);*/

	/* Riponi Carta */
	cima = pescata->next;
	fondo->next = pescata;
	pescata->next = NULL;
	fondo = pescata;
}

Mazzo::~Mazzo(){

}
