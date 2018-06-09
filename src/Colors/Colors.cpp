//
//  Colors.cpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 28/04/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#include "Colors.hpp"
#include <stdlib.h>
#include <iostream>

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

void colorize(char* dest, char* src, Color c){
    strcpy(dest, setColor(c));
    strcat(dest, src);
    strcat(dest, setDefault());
}


/*
 Funzione per impostare il colore ai nomi dei giocatori
 in modo casuale tramite rand()
 */


const char* setColor(Color color){
    
    switch (color) {
            
        case Color::red:
            return setRed();
            break;
            
        case Color::blue:
            return setBlue();
            break;
            
        case Color::yellow:
            return setYellow();
            break;
            
        case Color::green:
            return setGreen();
            break;
            
        default:
            return setDefault();
            
    }
    
 /*
    srand((unsigned)time(NULL));
    
    int random = rand() % 4;
    
    if(random == 1){
        return setRed();
    } else if(random == 2){
        return setYellow();
    } else if(random == 3){
        return setBlue();
    } else {
        return setGreen();
    }
*/
}

