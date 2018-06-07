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
#include "../dado/Dado.hpp"
#include <unistd.h>

void welcome(){
    system("Clear");
    cout <<endl<<"- - - - - - - - - - - - - -"<<endl<<endl;
    cout << "\x1b[35m- Gioco Dell' Oca Pazza -\x1b[0m"<<endl<<endl;
    cout << "    \x1b[31mSviluppato da:\x1b[0m "<<endl<<endl<<"    \x1b[32mFrancesco Cerio\x1b[0m"<<endl<<"    \x1b[33mFrancesco Polisena\x1b[0m"<<endl<<"    \x1b[34mFilippo Bartolucci\x1b[0m"<<endl<<endl;
    
    cout <<"- - - - - - - - - - - - - -  "<<endl<<endl;
    usleep(3000000);
    cout << " Premi invio per iniziare ";
    cin.ignore();
    system("Clear");
}

void turn(giocatore& g, tabellone t, Dado d){
    if (g.fermo==true) {
        t.stampaTabellone();
        cout <<endl<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<<endl<<endl;
        cout << "Turno di "<<g.getNome()<<endl<<endl<<"Sei sulla casella "<<g.getPos()<<endl;
        cin.ignore();
        cout <<endl<< "Stai fermo un turno "<<endl;
        g.fermo=false;
    } else {
        g.fermo=false;
        t.stampaTabellone();
         cout <<endl<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<<endl<<endl;
        cout << "Turno di "<<g.getNome()<<endl<<endl<<"Sei sulla casella "<<g.getPos()<<endl;
        cin.ignore();
        cout<<"Lanci il dado"<<endl;
        
        //stampaDado();
        //int d=dice();
        // usleep(500000);
        //cout <<endl<< "Hai fatto "<<d<<endl;
        
        d.mostraRisultato();
        
        if (g.getPos()+d.d<=t.getDim()) {
            g.setPos(g.getPos()+d.d);
        } else {
            g.setPos(g.getPos()+(g.getPos()+d.d-t.getDim()));
        }
        
        cout <<endl<< "Raggiungi la casella "<< g.getPos();
        cin.ignore();
        
        //int lastPos=g.getPos();
        
        t.effetto(g);
        
        /*
         while (g.getPos()!=lastPos){
         lastPos=g.getPos();
         t.effetto(g);
         }
         */
        
        cin.ignore();
    }
    
}
