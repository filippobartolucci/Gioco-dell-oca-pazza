//
//  game.hpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 06/06/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

#define MAX_GIOCATORI 4

#include <stdio.h>
#include "giocatore.hpp"
#include "tabellone.hpp"
#include "Dado.hpp"


class Game{

    bool isFinished = false;
    void gameLoop();
    int n_giocatori;
    
    
    
    tabellone* tabel = new tabellone();
    Dado* dado = new Dado();
    
public:
    int giocatoreCorrente = 0;
    giocatore* giocatori[MAX_GIOCATORI];
    Game();
    void messaggioIniziale();
    void initGiocatore();
    
    void muoviGiocatore();
    int giocatoreSuccessivo();
    int giocatorePrecedente();
    
    void mostraTurno();
    
    void finish();
    
    void end();
    
    
};




#endif /* game_hpp */
