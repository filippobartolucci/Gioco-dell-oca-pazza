//
//  Giocatore.cpp
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.

#include "giocatore.hpp"


giocatore::giocatore(char n[40], int pos){
    
    strcpy(this->nome, n);
    setPos(pos);
    setNumTurni(0);
    
}

//Inizializzo il vettore di giocatori che partecipano



void giocatore::initGiocatore(){
    
    int n_giocatori;
        
    cout << " - Inserire il numero di partecipanti (da 1 a 4): ";
    cin >> n_giocatori;
    
    while(n_giocatori < 2 || n_giocatori > 4){
        
        cout << " - Il numero di giocatori deve essere minimo 2 - " << endl;
        cout << " - Inserire il numero di partecipanti maggiore di 2: ";
        cin >> n_giocatori;
        
    }
    
    lista_giocatori giocatori[n_giocatori];
    char n[40];
    
    for (int i = 1; i <= n_giocatori; i++){
        
        cout << " - Inserire il nome del giocatore " << i << ": ";
        cin >> n;
        giocatori[i] = new giocatore(n, i);
        setColorPlayer(giocatori[i]->nome, strlen(giocatori[i]->nome));
    }
}

//Creo le funzioni per il giocatore

void giocatore::setPos(int p){
    this->posizione = p;
}

int giocatore::getPos(){
    return this->posizione;
}

void giocatore::setNumTurni(int n){
    this->numTurni = n;
}

int giocatore::getnumTurni(){
    return this->numTurni;
}

void giocatore::decTurni(){
    this->numTurni--;
}

bool giocatore::saltaTurno(){
    bool fermo = this->numTurni != 0;
    if(fermo)
        decTurni();
    return fermo;
}

/*
 + setColorPlayer() inserisce il colore all'interno della stringa dividendola in 3 parti:
   1 - la prima parte contiene il codice ANSI per il colore ( scelto casualmente da setColor() )
   2 - la seconda parte contiene il nome del giocatore
   2 - la terza parte contiene il codice ANSI che resetta il colore di deafult tramite setDefault()
*/

const char* giocatore::setColorPlayer(char n[40], size_t length){
    char* colorName = (char*)malloc(length);
    strcpy(colorName, setColor());
    strcat(colorName, n);
    strcat(colorName, setDefault());
    return colorName;
}


void giocatore::Dado::lanciaDado(){
    
    this->d = rand() % 6 + 1;
    
    //lanco del secondo dado
    
    this->d += rand() % 6 + 1;
    
    cout << "Hai totalizzato " << this->d << "!" << endl;
}



    

