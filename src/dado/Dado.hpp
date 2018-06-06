//
//  Dado.hpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 16/05/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#ifndef Dado_hpp
#define Dado_hpp

#include <stdio.h>
class Dado{
public:
    
    int d;
    
    Dado();
    
    int lanciaDado();
    int rilanciaDado();
    void mostraRisultato();
    void disegnaDado();
    
};
#endif /* Dado_hpp */
