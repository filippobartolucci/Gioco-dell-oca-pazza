//
//  Colors.cpp
//  GOP
//
//  Created by Francesco Cerio on 21/04/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#include "Colors.hpp"

using namespace color;


/*
 Funzioni per impostare i colori
*/


string setRed(){
    return RED;
}

string setBlue(){
    return BLUE;
}

string setYellow(){
    return YELLOW;
}

string setGreen(){
    return GREEN;
}


/*
 Funzione per impostare il colore ai nomi dei giocatori
 in modo casuale tramite rand()
*/


string setColor(){
    
    int random = rand() % 4 + 1;
    
    if(random == 1){
        return setRed();
    } else if(random == 2){
        return setYellow();
    } else if(random == 3){
        return setBlue();
    } else {
        return setGreen();
    }
}





