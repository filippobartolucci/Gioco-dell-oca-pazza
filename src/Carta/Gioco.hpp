/*
 * Gioco.hpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef GIOCO_H_
#define GIOCO_H_

#include "src/giocatore/giocatore.hpp"

class Gioco {
	private:
		giocatore *__giocatori;
		int        __n_giocatori;
		giocatore  *__giocatore_attivo;

	public:
		Gioco();
		~Gioco();

		int get_n_giocatori();
		giocatore *get_lista_giocatori();
		giocatore *get_giocatore_attivo();
};

#endif /* GIOCO_H_ */
