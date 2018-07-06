/*
 * Domanda.cpp
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#include <src/Carta/Domanda.h>
#include <cstring>
#include <iostream>
#include <src/Domande/Domande.hpp>

Domanda::Domanda() : Carta("Rispondi ad una domanda! ") {
	// TODO Auto-generated constructor stub

}

void Domanda::effetto_carta(Gioco* gioco){
	bool risposta_giusta;

	risposta_giusta = ask();
	if(!risposta_giusta){
    	int num_turni;
    	num_turni = gioco->get_giocatore_attivo()->getnumTurni();
    	gioco->get_giocatore_attivo()->setNumTurni(++num_turni);
    }
}

Domanda::~Domanda() {
	// TODO Auto-generated destructor stub
}

