//
//  Game.cpp
//  G.O.P.
//
//  Created by Filippo Bartolucci on 16/05/18.
//  Copyright © 2018 Filippo Bartolucci. All rights reserved.
//

#include "Game.hpp"
#include "../Giocatore/giocatore.hpp"
#include "../Tabellone/tabellone.hpp"
#include "../Utils/utils.hpp"
#include <unistd.h>

void turn(giocatore& g, tabellone t){
    if (g.fermo==true) {
        t.stampaTabellone();
        cout <<endl<<"- - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
        cout << "Turno di NOME GIOCATORE"<<endl<<endl<<"Sei sulla casella "<<g.getPos()<<endl;
        cin.ignore();
        cout <<endl<< "Stai fermo un turno "<<endl;
        g.fermo=false;
    } else {
        g.fermo=false;
        t.stampaTabellone();
        cout <<endl<<"- - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
        cout << "Turno di NOME GIOCATORE"<<endl<<endl<<"Sei sulla casella "<<g.getPos()<<endl;
        cin.ignore();
        cout<<"Lanci il dado"<<endl;
        stampaDado();
        int d=dice();
        
        // usleep(500000);
        cout <<endl<< "Hai fatto "<<d<<endl;
        
        if (g.getPos()+d<=t.getDim()) {
            g.setPos(g.getPos()+d);
        } else {
            g.setPos(g.getPos()+(g.getPos()+d-t.getDim()));
        }
        
        cout <<endl<< "Raggiungi la casella "<< g.getPos();
        cin.ignore();
        
        int lastPos=g.getPos();
        t.effetto(g);
        
        while (g.getPos()!=lastPos){
            lastPos=g.getPos();
            t.effetto(g);
        }
        
        cin.ignore();
    }
   
}
