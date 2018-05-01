/*
 * Card.h
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef CARD_H_
#define CARD_H_
#include <cstring>
#include <iostream>
#define lung 100 //lunghezza messaggio

using namespace std;

class Carta {
  private:
     char messaggio[lung]; //messaggio visualizzato sulla carta

   public:
	   Carta();
       Carta(char* messaggio);
       void setMessaggio(char* messaggio); //metodo per definire il messaggio
       char* getMessaggio();// metodo per mostrare il messaggio
       //void effetto_carta(Gioco* gioco);//
	   virtual ~Carta();
};

#endif /* CARD_H_ */
