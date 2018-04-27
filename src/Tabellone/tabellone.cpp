//
//  tabellone.cpp
//  G.O.P.
//
//  Created by Filippo Bartolucci on 24/04/18.
//  Copyright © 2018 Filippo Bartolucci. All rights reserved.
//

#include "tabellone.hpp"
#include <iostream>
#include "casella.hpp"

tabellone::tabellone(){
    this->dim=(rand() % 41) + 58;
    this->caselle[0].setInizio();
    this->caselle[dim].setArrivo();
}

void tabellone::stampaTabellone(){
    int n=this->getDim()/2;
    
    for (int i=0;i<=9;i++){
        cout<<"0"<<i<<"- "<< this->caselle[i].getNomeTipo()<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"| "<<i+n+1<<"- "<<this->caselle[i+n+1].getNomeTipo()<<endl;
    }
    
    for (int i=10;i<=n;i++){
        if (i+n<=this->getDim()){
            cout<<i<<"- "<< this->caselle[i].getNomeTipo()<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"| "<<i+n+1<<"- "<<this->caselle[i+n].getNomeTipo()<<endl;
        }else{
            cout<<i<<"- "<< this->caselle[i].getNomeTipo()<<"\t"<<endl;
        }
        
    }
}

int tabellone::getDim(){
    return this->dim;
}

void tabellone::effetto(int n){
    this->caselle[n].effetto();
}

