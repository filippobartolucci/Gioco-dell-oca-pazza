//
//  Game.hpp
//  G.O.P.
//
//  Created by Filippo Bartolucci on 16/05/18.
//  Copyright © 2018 Filippo Bartolucci. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "../Giocatore/giocatore.hpp"
#include "../Tabellone/tabellone.hpp"
#include "../dado/Dado.hpp"

//Messaggio iniziale 
void welcome();

void turn(giocatore& g, tabellone t, Dado d);

void credits();
#endif /* Game_hpp */
