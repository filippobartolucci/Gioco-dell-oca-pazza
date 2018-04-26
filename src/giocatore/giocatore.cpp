//
//  Giocatore.cpp
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.

#include "giocatore.hpp"
#include "Colors.cpp"

giocatore::giocatore(char n[], int pos){
    
    strcpy(this->nome, n);
    this->posizione = pos;
    
}


/*
 Inizializzo il vettore di giocatori che partecipano
 */


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
    char n[30];
    
    for (int i = 1; i <= n_giocatori; i++){
        
        cout << " - Inserire il nome del giocatore " << i << ": ";
        cin >> n;
        giocatori[i] = new giocatore(n, i);
        addColor(giocatori[i]->nome, strlen(giocatori[i]->nome));
        
    }
}


char giocatore::addColor(char n[], size_t length){
    char tmp[length];
    strcpy(tmp, n);
    string colorName = setColor();
    
}

void giocatore::Dado::lanciaDado(){
    
    this->d = rand() % 6 + 1;
    
    //lanco del secondo dado
    
    this->d += rand() % 6 + 1;
    
    cout << "Hai totalizzato " << this->d << "!" << endl;
}



    

