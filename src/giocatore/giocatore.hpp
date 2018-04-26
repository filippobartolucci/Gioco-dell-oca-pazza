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
#include "Colors.cpp"


using namespace std;


class giocatore{
    
protected:
    
    char nome[40];
    int numTurni;
    int posizione;
    Color color;
    
    typedef giocatore *lista_giocatori;
    
public:
    
    giocatore(char n[40], int pos);
    
    void initGiocatore();
    
    void setPos(int p);
    
    int getPos();
    
    const char* setColorPlayer(char n[], size_t length);
    
    void setNumTurni(int n);
    
    int getnumTurni();
    
    bool saltaTurno();
    
    void decTurni();
    
    
    
    
    //Creo la classe Dado
    
    
    class Dado{
    public:
        
        int d;
        
        Dado();
        
        void lanciaDado();
        
    };
    

};
