/*
 * RilanciaDado.cpp
 *
 *  Created on: 01/mag/2018
 *      Author: polis
 */

#include "RilanciaDado.h"

Rilancia_Dado::Rilancia_Dado() : Carta() {
	// TODO Auto-generated constructor stub

	strcpy(this->messaggio , "Tira nuovamente il dado!");
	setMessaggio(this->messaggio);

}
/*
void Rilancia_Dado::effetto_carta(Gioco* gioco){
.... //cosa devo scrivere qui?
}
*/
Rilancia_Dado::~Rilancia_Dado() {
	// TODO Auto-generated destructor stub
}

