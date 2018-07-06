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
#include "../../../Gop/src/giocatore/giocatore.hpp"
#include "../../../Gop/src/Tabellone/tabellone.hpp"
#include "../../../Gop/src/dado/Dado.hpp"
#include "../../../Gop/src/Mazzo/Mazzo.hpp"


class Game{

    int giocatoreCorrente = 0;
    bool isFinished = false;
    void gameLoop();
    int n_giocatori = 0;
    giocatore* giocatori[MAX_GIOCATORI];
    tabellone* tabel;
    Mazzo* m;
    
    
    
    Dado* dado = new Dado();
    
public:
    
    
    Game();
    void messaggioIniziale();
    void initGiocatore();
    
    void initTabellone();
    
    void muoviGiocatore();
    int giocatoreSuccessivo();
    int giocatorePrecedente();
    
    void mostraTurno();
    
    void finish(giocatore *g);
    
    void end();
};




#endif /* game_hpp */
