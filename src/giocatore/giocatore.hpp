//
//  Giocatore.h
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//


#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

class giocatore{
    
protected:
    char nome[30];
    int punti;
    int posizione;
    
public:
    
    giocatore(char n[], int pos);

    
    /*
     Inizializzo il vettore di giocatori che partecipano
     */
    
    void initGiocatore();
    
    
    /*
     Creo la classe Dado
    */
    
    class Dado{
    public:
        
        int d;
        
        Dado();
        
        void lanciaDado();
        
    };
    

};
