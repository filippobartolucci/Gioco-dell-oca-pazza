/*
 * Domanda.cpp
 *
 *  Created on: 05/mag/2018
 *      Author: polis
 */

#include "DomandaCarta.h"
#include <cstring>
#include <iostream>
#include "Domande.hpp"

DomandaCarta::DomandaCarta() : Carta("Rispondi ad una domanda! ") {
	// TODO Auto-generated constructor stub

}

void DomandaCarta::effetto_carta(giocatore* g){
    
	bool risposta_giusta;
	risposta_giusta = ask();
    
    if(!risposta_giusta)
    
        g->incTurni();
    
    else {
        
        cout << "Avanzi di 5 caselle" << endl;
        int localpos = g->getPos();
        localpos += 5;
        g->setPos(localpos);
    
    }
}

DomandaCarta::~DomandaCarta() {
	// TODO Auto-generated destructor stub
}

