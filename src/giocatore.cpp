//
//  Giocatore.cpp
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.

#include "giocatore.h"
#include "Colors.h"


giocatore::giocatore(char n[MAX_CHAR_NAME], int pos){
    
    strcpy(this->nome, n);
    setPos(pos);
    setNumTurni(0);
    this->rilancia = false;
    
}

//Inizializzo il vettore di giocatori che partecipano



void giocatore::initGiocatore(){
    
    int n_giocatori;
        
    cout << " - Inserire il numero di partecipanti (da 1 a 4): ";
    cin >> n_giocatori;
    
    while(n_giocatori < 2 || n_giocatori > 4){
        
        cout << " - Il numero di giocatori deve essere minimo 2 - " << endl;
        cin.ignore();
        cout << " - Inserire il numero di partecipanti (da 1 a 4): ";
        cin >> n_giocatori;
    }
    
    lista_giocatori giocatori[n_giocatori];
    char n[40];
    
    for (int i = 1; i <= n_giocatori; i++){
        
        cout << " * Inserire il nome del giocatore " << i << ": ";
        cin >> n;
        giocatori[i] = new giocatore(n, i);
        setColorPlayer(giocatori[i]->nome);
        
    }
    for (int i = 1; i <= n_giocatori; i++){
        cout << giocatori[i]->nome << endl;
        cout << giocatori[i]->posizione << endl;
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

void giocatore::setRilancia(bool rilancia){
	this->rilancia = rilancia;
}

bool giocatore::getRilancia(){
	return this->rilancia;
}

bool giocatore::saltaTurno(){
    bool fermo = this->numTurni != 0;
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

const char* giocatore::setColorPlayer(char n[40]){
    char* colorName = (char*)malloc(MAX_CHAR_NAME);
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



    

