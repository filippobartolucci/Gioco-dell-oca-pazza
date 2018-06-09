//
//  Colors.cpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 28/04/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//


#include <stdlib.h>
#include "Colors.h"

/*
 Funzioni per impostare i colori 
 */

const char* setRed(){
    return RED;
}

const char* setBlue(){
    return BLUE;
}

const char* setYellow(){
    return YELLOW;
}

const char* setGreen(){
    return GREEN;
}

const char* setDefault(){
    return DEFAULT;
}


/*
 Funzione per che ritorna un colore in base al numero del giocatore
 */

const char* setColor(int n){
    
    if(n == 1){
        return setRed();
    } else if(n == 2){
        return setYellow();
    } else if(n == 3){
        return setBlue();
    } else {
        return setGreen();
    }
}


