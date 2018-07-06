/*
 * Fermounturno.cpp
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#include "Fermounturno.h"


Fermo_un_turno::Fermo_un_turno() : Carta("Fermo per un turno") {


}

void Fermo_un_turno::effetto_carta(Gioco* gioco){
	int num_turni;

    num_turni = gioco->get_giocatore_attivo()->getnumTurni();
    gioco->get_giocatore_attivo()->setNumTurni(++num_turni);

}

Fermo_un_turno::~Fermo_un_turno() {
	// TODO Auto-generated destructor stub
}

