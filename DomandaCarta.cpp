/*
 * Domanda.cpp
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#include "DomandaCarta.hpp"

#include "../../../Gop/src/Domande/Domande.hpp"

#include <cstring>
#include <iostream>

DomandaCarta::DomandaCarta() : Carta("Rispondi ad una domanda! ") {
}

void DomandaCarta::effetto_carta(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT)
{
    
	bool risposta_giusta;
	risposta_giusta = ask();
    
    if(!risposta_giusta)
    
        g[giocatoreCorrente]->saltaTurno();
    
    else {
        
        cout << "Avanzi di 5 caselle" << endl;
        if (g[giocatoreCorrente]->getPos() + 5 <= dimT)
            g[giocatoreCorrente]->setPos(g[giocatoreCorrente]->getPos()+ 5);
        else
            g[giocatoreCorrente]->setPos(g[giocatoreCorrente]->getPos()+(g[giocatoreCorrente]->getPos() + 5 - dimT) - 1);
    
    }
}

DomandaCarta::~DomandaCarta() {;}

