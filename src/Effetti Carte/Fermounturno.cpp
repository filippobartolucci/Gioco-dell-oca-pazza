/*
 * Fermounturno.cpp
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#include "../Effetti Carte/Fermounturno.hpp"


Fermo_un_turno::Fermo_un_turno() : Carta("Fermo per un turno") {
    
}

void Fermo_un_turno::effetto_carta(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT)
{
    g[giocatoreCorrente]->saltaTurno();
}

Fermo_un_turno::~Fermo_un_turno() {;}

