//
//  Colors.cpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 28/04/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#include "Colors.h"
#include <stdlib.h>

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
 Funzione per impostare il colore ai nomi dei giocatori
 in modo casuale tramite rand()
 */


const char* setColor(){
    
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

