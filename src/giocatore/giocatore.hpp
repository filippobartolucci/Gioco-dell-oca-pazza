//
//  Giocatore.hpp
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#ifndef giocatore_hpp
#define giocatore_hpp

#include <string>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>

#include "Colors.hpp"

#define MAX_CHAR_NAME 40

using namespace std;


class giocatore{
    
  private:

    char nome[MAX_CHAR_NAME];
    int numTurni;
    int posizione;
    string colore;
    
  public:
    giocatore(char n[MAX_CHAR_NAME], int pos);
    
    void setPos(int p);
    
    int getPos();
    
    const char* setColorPlayer(char n[]);
    
    bool fermo;

    void saltaTurno();

    string getNome();
    
    string getColore();
};

#endif
