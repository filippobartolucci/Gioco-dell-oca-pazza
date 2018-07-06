/*
 * RilanciaDado.hpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#ifndef RILANCIADADO_H_
#define RILANCIADADO_H_

#include "../../../Gop/src/Carta/Carta.hpp"

class Rilancia_Dado : public Carta { //sottoclasse di carta

public:
//    tipoCarta rilanciaDado = rilanciaDado;
	Rilancia_Dado();
	void effetto_carta(giocatore* g[], int giocatoreCorrente, int n_giocatori, int dimT);
    ~Rilancia_Dado();
};

#endif /* RILANCIADADO_H_ */
