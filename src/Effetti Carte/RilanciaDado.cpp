/*
 * RilanciaDado.cpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#include "../Effetti Carte/RilanciaDado.hpp"
#include <cstring>
#include <iostream>
#include "../Dado/Dado.hpp"

Rilancia_Dado::Rilancia_Dado() : Carta("Rilancia il dado"){
}

void Rilancia_Dado::effetto_carta(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT)
{
    Dado* dado = new Dado();
    dado->mostraRisultato();
    cout << endl;
    if (g[giocatoreCorrente]->getPos()+ dado->d <= dimT)
        g[giocatoreCorrente]->setPos(g[giocatoreCorrente]->getPos()+ dado->d);
    else
        g[giocatoreCorrente]->setPos(g[giocatoreCorrente]->getPos()+(g[giocatoreCorrente]->getPos()+dado->d - dimT) - 1);
    cout << "Raggiungi la casella " << g[giocatoreCorrente]->getPos()<<endl;
}

Rilancia_Dado::~Rilancia_Dado(){;}

