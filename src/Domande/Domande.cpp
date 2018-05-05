//
//  Domande.cpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 28/04/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#include "Domande.hpp"
#include "giocatore.hpp"

domanda domande[] = {
    {"In quale film Nicolas Cage ruba 50 auto in una notte?", {
        "a. Fuori di testa",
        "b. Con Air",
        "c. Fuori in 60 secondi",
        "d. Drive Angry"}, 'c'},
    
    {"Con quale film Leonardo Di Caprio ha vinto l'Oscar?", {
        "a. Titanic",
        "b. The Wolf Of Wall Street",
        "c. Il grande Gatsby",
        "d. Revenant"}, 'd'},
    
    {"Quale tra i seguenti non è un film di Quentin Tarantino?",{
        "a. Le Iene",
        "b. The Hateful 8",
        "c. Per un pugno di dollari",
        "d. Django"}, 'c'}
};


int num_domande = sizeof(domande)/sizeof(*domande);


domanda scegliDomanda(){
    srand((unsigned)time(NULL));
    int random = rand()%num_domande;
    return domande[random];
}


bool ask(){
    
    domanda d = scegliDomanda();
    char risposta = ' ';
    
    cout << d.dom << endl << endl;
    
    for(int i = 0; i < NUM_RISPOSTE; i++){
        cout << d.risposta[i] << endl;
    }
    
    cout << endl;
    cin >> risposta;
    
    bool isTrue = false;
    if(risposta == d.giusta){
        cout << "La risposta è corretta!" << endl;
        isTrue = true;
    } else {
        cout << "Risposta errata!" << endl;
    }
    return isTrue;
}
