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
#include <cstdlib>
#include "../Colors/Colors.h"


using namespace std;


class giocatore{
    
    int n_giocatori;

    static int giocatoriTotali;
    
private:
    
    char nome[MAX_CHAR_NAME];
    int numTurni;
    int posizione;
    string colore;
    
    typedef giocatore *lista_giocatori;
    
public:
    
    // Costruttore per classe giocatore
    giocatore(char n[MAX_CHAR_NAME], int pos);
    
<<<<<<< HEAD
    // Booleano per il controllo del turno
    bool fermo;
    
    void initGiocatore();
    
    // Setta la posizione del giocatore
=======
>>>>>>> fc2bbef1c6b804b7213a27c955e51d9b21d033a7
    void setPos(int p);
    
    // Ritorna la pozione del giocatore
    int getPos();
    
    
    void setNumTurni(int n);
    
    int getnumTurni();
    
<<<<<<< HEAD
=======
    bool saltaTurno();
    
>>>>>>> fc2bbef1c6b804b7213a27c955e51d9b21d033a7
    void decTurni();
    
    string getNome();
    
    
    
<<<<<<< HEAD
    
=======
    void setNumColore(int numColore);
>>>>>>> fc2bbef1c6b804b7213a27c955e51d9b21d033a7
    
};



#endif

