//
//  Colors.hpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 28/04/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#ifndef Colors_hpp
#define Colors_hpp

#include <cstring>
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define DEFAULT "\033[0m"

enum Color{
    red = 0,
    yellow = 1,
    blue = 2,
    green = 3
};

const char* setRed();
const char* setBlue();
const char* setGreen();
const char* setYellow();
const char* setDefault();
const char* setColor(Color color);

void colorize(char* src, char* dest, Color c);


#endif /* Colors_hpp */
