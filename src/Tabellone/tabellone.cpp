//
//  tabellone.cpp
//  G.O.P.
//
//  Created by Filippo Bartolucci on 24/04/18.
//  Copyright © 2018 Filippo Bartolucci. All rights reserved.
//



#include <iostream>
#include <unistd.h>

#include "tabellone.hpp"
#include "Domande.hpp"

#define spostamento 5

tabellone::tabellone(){
    
    this->dim=(rand() % 41) + 38;
    this->caselle[0].setInizio();
    this->caselle[dim].setArrivo();
}


string tabellone::posGiocatori(giocatore* g[], int numG, int pos){
    string s;
    for (int i=0; i<numG; i++){
        if (g[i]->getPos()==pos){
            s+=g[i]->getColore()+"×"+"\x1b[0m";
        }else {
            s+=" ";
        }
    }
    return s;
}


void tabellone::stampaTabellone(giocatore* g[], int numG){
    int n=this->getDim()/2;
    
    cout<<endl;
    
    system("clear");
    
    
    cout <<endl<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - "<<endl<<endl;
    for (int i=0;i<=9;i++){
        cout<<"| 0"<<i<<" - "<< this->caselle[i].getNomeTipo()<<"\t"<<"\t"<<posGiocatori(g, numG, i)<<"\t"<<"| "<<i+n+1<<" - "<<this->caselle[i+n+1].getNomeTipo()<<"\t"<<"\t"<<posGiocatori(g, numG, i+n+1)<<"\t"<<endl;
    }
    
    for (int i=10;i<=n;i++){
        if (i+n+1<=this->getDim()){
            cout<<"| "<<i<<" - "<< this->caselle[i].getNomeTipo()<<"\t"<<"\t"<<posGiocatori(g, numG, i)<<"\t"<<"| "<<i+n+1<<" - "<<this->caselle[i+n+1].getNomeTipo()<<"\t"<<"\t"<<posGiocatori(g, numG, i+n+1)<<endl;
        }else{
            cout<<"| "<<i<<" - "<< this->caselle[i].getNomeTipo()<<"\t"<<"\t"<<posGiocatori(g, numG, i)<<endl;
        }
    }
}


int tabellone::getDim(){
    return this->dim;
}

void tabellone::effetto(giocatore* g[], int giocatoreCorrente, int n_giocatori, Mazzo* mazzo){
    enum tipo tipoCasella=this->caselle[g[giocatoreCorrente]->getPos()].getTipo();

    bool a;

    switch (tipoCasella) {
        case Inizio:
            cout<<endl<<"Sei all'" << "\x1b[32mInizio\x1b[0m" <<endl<<endl;
            break;

        case Vuota:
            cout<<endl<<"Casella Vuota - Non succede niente"<<endl<<endl;
            break;

        case Avanti:
            cout<<endl<<"Casella " << "\x1b[33mAvanti\x1b[0m" <<" - Vai Avanti di 5"<<endl<<endl;

            if (g[giocatoreCorrente]->getPos()+spostamento <= this->dim) {
                g[giocatoreCorrente]->setPos(g[giocatoreCorrente]->getPos()+spostamento);
            } else {
                g[giocatoreCorrente]->setPos(this->getDim() - (g[giocatoreCorrente]->getPos()+spostamento - this->getDim()));
            }
            cout << "Raggiungi la casella "<< g[giocatoreCorrente]->getPos()<<endl;
            break;

        case Indietro:
            cout<<endl<<"Casella " << "\x1b[34mIndietro\x1b[0m" <<" - Torni indietro di 5"<<endl<<endl;
            if (g[giocatoreCorrente]->getPos()-spostamento>=0) {
                g[giocatoreCorrente]->setPos(g[giocatoreCorrente]->getPos()-spostamento);
            } else {
                g[giocatoreCorrente]->setPos(0);
            }
            cout << "Raggiungi la casella "<< g[giocatoreCorrente]->getPos()<<endl;
            break;

        case Pesca:
            cout<<endl<<"Casella " << "\x1b[35mPesca\x1b[0m" <<" - Peschi una carta dal mazzo"<<endl;
            mazzo->pesca(g,giocatoreCorrente,n_giocatori,this->getDim());
            break;

        case Fermo:
            cout<<endl<<"Casella " << "\x1b[31mFermo\x1b[0m" <<" - Perdi un turno"<<endl<<endl;
            g[giocatoreCorrente]->saltaTurno();
            break;

        case Domanda:
            cout<<endl<<"Casella " << "\x1b[36mDomanda\x1b[0m" <<" - Preparati a rispondere"<<endl<<endl;
            usleep(500000);
            a = ask();
            if (a==true){
                if (g[giocatoreCorrente]->getPos()+spostamento<=this->dim) {
                    g[giocatoreCorrente]->setPos(g[giocatoreCorrente]->getPos()+spostamento);
                } else {
                    g[giocatoreCorrente]->setPos(g[giocatoreCorrente]->getPos()+(g[giocatoreCorrente]->getPos()+spostamento-dim));
                }
            }else{
                if (g[giocatoreCorrente]->getPos()-spostamento>=0) {
                    g[giocatoreCorrente]->setPos(g[giocatoreCorrente]->getPos()-spostamento);
                } else {
                    g[giocatoreCorrente]->setPos(0);
                }
            }
            cout << "Raggiungi la casella "<< g[giocatoreCorrente]->getPos();
            break;

        case Arrivo:
            cout <<endl<<" -" << "\x1b[32mArrivo\x1b[0m" <<"- " <<endl<<endl ;
            break;
    }
}

casella tabellone::getCasella(int n){
    return this->caselle[n];
}
