/*
 * Card.h
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef CARD_H_
#define CARD_H_

class Carta {
  private:
     char __messaggio[100]; //messaggio visualizzato sulla carta

   public:
	   Carta();
       Carta(char const * messaggio);
       void setMessaggio(char const * messaggio); //metodo per definire il messaggio
       char* getMessaggio();// metodo per mostrare il messaggio
       //virtual void effetto_carta(giocatore *giocatori);
	   ~Carta();
};

#endif /* CARD_H_ */
