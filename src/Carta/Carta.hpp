/*
 * Card.h
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef CARD_H_
#define CARD_H_

#define TIPI_CARTE 6
#include "../giocatore/giocatore.hpp"


class Carta {
  private:
    char messaggio[100]; //messaggio visualizzato sulla carta

  public:
    Carta* next;

    Carta(char const * messaggio);
    virtual ~Carta();

    void setMessaggio(char const * messaggio); //metodo per definire il messaggio
    char* getMessaggio();// metodo per mostrare il messaggio
    virtual void effetto_carta(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT);
};

#endif /* CARD_H_ */
