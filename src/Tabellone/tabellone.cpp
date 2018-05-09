//
//  tabellone.cpp
//  G.O.P.
//
//  Created by Filippo Bartolucci on 24/04/18.
//  Copyright © 2018 Filippo Bartolucci. All rights reserved.
//

#include "tabellone.hpp"
#include <iostream>
#include "../Casella/casella.hpp"
#include "../Domande.hpp"
#include "../giocatore.hpp"
#define spostamento 5

tabellone::tabellone(){
    this->dim=(rand() % 41) + 58;
    this->caselle[0].setInizio();
    this->caselle[dim].setArrivo();
}

void tabellone::stampaTabellone(){
    int n=this->getDim()/2;
    
    cout<<endl;
    
    system("clear");
    
    cout<<endl;
    for (int i=0;i<=9;i++){
        cout<<"| 0"<<i<<" - "<< this->caselle[i].getNomeTipo()<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"| "<<i+n+1<<" - "<<this->caselle[i+n+1].getNomeTipo()<<endl;
    }
    
    for (int i=10;i<=n;i++){
        if (i+n+1<=this->getDim()){
            cout<<"| "<<i<<" - "<< this->caselle[i].getNomeTipo()<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"| "<<i+n+1<<" - "<<this->caselle[i+n+1].getNomeTipo()<<endl;
        }else{
            cout<<"| "<<i<<" - "<< this->caselle[i].getNomeTipo()<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<" ----------------------"<<endl;
        }
    }
}

int tabellone::getDim(){
    return this->dim;
}

void tabellone::effetto(giocatore &g){
    enum tipo tipoCasella=this->caselle[g.getPos()].getTipo();


    switch (tipoCasella) {
        case Inizio:
            cout<<endl<<"Sei all'inizio"<<endl<<endl;
            break;

        case Vuota:
            cout<<endl<<"Casella vuota - Non succede niente"<<endl<<endl;
            break;

        case Avanti:
            cout<<endl<<"Casella Avanti - Vai Avanti di 5"<<endl<<endl;
            
            if (g.getPos()+spostamento<=this->dim) {
                g.setPos(g.getPos()+spostamento);
            } else {
                g.setPos(g.getPos()+(g.getPos()+spostamento-dim)-1);
            }
            break;

        case Indietro:
            cout<<endl<<"Casella Indietro - Torni indietro di 5"<<endl<<endl;
            if (g.getPos()-spostamento>=0) {
                g.setPos(g.getPos()-spostamento);
            } else {
                g.setPos(0);
            }
            
            break;

        case Pesca:
            cout<<endl<<"Casella Pesca - Peschi una carta dal mazzo"<<endl<<endl;

            break;

        case Fermo:
            cout<<endl<<"Casella Fermo - Perdi un turno"<<endl<<endl;

            break;

        case Domanda:
            cout<<endl<<"Casella Domanda - Preparati a rispondere"<<endl<<endl;
           if (ask()==true){
                if (g.getPos()+spostamento<=this->dim) {
                    g.setPos(g.getPos()+spostamento);
                } else {
                    g.setPos(g.getPos()+(g.getPos()+spostamento-dim)-1);
                }
            }else{
                if (g.getPos()-spostamento>=0) {
                    g.setPos(g.getPos()-spostamento);
                } else {
                    g.setPos(0);
                }
            }
            break;

        case Arrivo:
            cout <<endl<<" -Arrivo- " <<endl<<endl ;
            break;


    }
}

