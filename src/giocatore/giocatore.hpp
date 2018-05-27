//
//  Giocatore.hpp
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#ifndef giocatore_hpp
#define giocatore_hpp

#define MAX_CHAR_NAME 40
#include <string>
#include <iostream>
#include <stdlib.h>
//#include "Colors.cpp"


using namespace std;


class giocatore{
    
private:
    
    char nome[MAX_CHAR_NAME];
    int numTurni;
    int posizione;
    
    
    typedef giocatore *lista_giocatori;
    
public:
    
    giocatore(char n[MAX_CHAR_NAME], int pos);
    
    bool fermo;
    
    void initGiocatore();
    
    void setPos(int p);
    
    int getPos();
    
    const char* setColorPlayer(char n[]);
    
    void setNumTurni(int n);
    
    int getnumTurni();
    
    void saltaTurno();
    
    void decTurni();
    
    
    
    
    //Creo la classe Dado
    
    
    class Dado{
    public:
        
        int d;
        
        Dado();
        
        void lanciaDado();
        
    };
    
    
};

#endif
