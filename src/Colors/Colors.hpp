//
//  Colors.hpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 28/04/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#ifndef Colors_hpp
#define Colors_hpp

#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <cstring>

#define RED "\x1b[31m"
#define GREEN  "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE  "\x1b[34m"
#define LIGHTBLUE "\x1b[36m"
#define MAGENTA "\x1b[35m"
#define DEFAULT  "\x1b[0m"

using namespace std;

const char* setColor(int n);

const char* setRed();
const char* setYellow();
const char* setBlue();
const char* setGreen();
const char* setMagenta();
const char* setLightBlue();
const char* setDefault();

#endif /* Colors_hpp */
