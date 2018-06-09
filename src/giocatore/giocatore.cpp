//
//  Giocatore.cpp
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.

#include "giocatore.hpp"
#include "Colors.hpp"

giocatore::giocatore(char n[MAX_CHAR_NAME], int numColore){
    strcpy(this->nome, n);
    setPos(0);
    setNumTurni(0);
    this->colore=setColor(numColore);
}

<<<<<<< HEAD
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
=======
>>>>>>> fc2bbef1c6b804b7213a27c955e51d9b21d033a7

//Creo le funzioni per il giocatore

string giocatore::getNome(){
    return (this->colore + this->nome + "\x1b[0m");
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

<<<<<<< HEAD


=======
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
>>>>>>> fc2bbef1c6b804b7213a27c955e51d9b21d033a7

