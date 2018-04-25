//
//  Colors.hpp
//  GOP
//
//  Created by Francesco Cerio on 21/04/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#ifndef Colors_hpp
#define Colors_hpp

#include <stdio.h>
#include <string>
#include <stdlib.h>
#define RED  "\033[31m"
#define GREEN  "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE  "\x1b[34m"
#define DEFAULT  "\x1b[0m"

using namespace std;

namespace color {
    
    class Color{
        
    public:
       
        /*
        string colorString[4][4] = {
            {"red", RED},
            {"yellow", YELLOW},
            {"blue", BLUE},
            {"green", GREEN}
        };
        
         */
        
        Color();
        
        void setColor();
        
        string setRed();
        string setYellow();
        string setBlue();
        string setGreen();
        
    };
}


#endif /* Colors_hpp */
