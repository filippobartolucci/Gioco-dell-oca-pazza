////
//  Giocatore.cpp
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.

#include "giocatore.hpp"
#include "Colors.h"


giocatore::giocatore(char n[MAX_CHAR_NAME], int numColore){
    strcpy(this->nome, n);
    setPos(0);
    setNumTurni(0);
    setNumColore(numColore);
}

//Inizializzo la lista di giocatori che partecipano


void giocatore::initGiocatore(){
    
    int n_giocatori = 0;
    
    cout << " - Inserire il numero di partecipanti (da 1 a 4): ";
    cin >> n_giocatori;
    
    while(cin.fail() || n_giocatori < 2 || n_giocatori > 4){
        cin.clear();
        cin.ignore(256, '\n');
        cout << endl;
        cout << " - Il numero di giocatori deve essere compreso tra 2 e 4 - " << endl << endl;
        cout << " - Inserire il numero di partecipanti (da 1 a 4): ";
        cin >> n_giocatori;
    }
    
    
    lista_giocatori giocatori[n_giocatori];
    char n[40];
    
    
    for (int i = 0; i < n_giocatori; i++){
        cout << " * Inserire il nome del giocatore " << i + 1 << ": ";
        cin >> n;
        giocatori[i] = new giocatore(n, i);
        
    }
    
    for (int i = 0; i < n_giocatori; i++){
        cout << giocatori[i]->nome << endl;
        cout << giocatori[i]->posizione << endl;
    }
}

//Creo le funzioni per il giocatore

char* giocatore::getNome(){
    return this->nome;
}

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
    fermo = this->numTurni != 0;
    if(fermo)
        decTurni();
    return fermo;


}


/*
 + setColorPlayer() inserisce il colore all'interno della stringa dividendola in 3 parti:
 1 - codice ANSI per il colore ( scelto casualmente da setColor() )
 2 - il nome del giocatore
 3 - codice ANSI che resetta il colore di deafult tramite setDefault()
 */

void giocatore::setNumColore(int numColore){
    this -> colore = static_cast<Color>(numColore);
}

const char* giocatore::setColorPlayer(char n[40]){
    char* colorName = (char*)malloc(MAX_CHAR_NAME);
    strcpy(colorName, setColor(this -> colore));
    strcat(colorName, n);
    strcat(colorName, setDefault());
    return colorName;
}
