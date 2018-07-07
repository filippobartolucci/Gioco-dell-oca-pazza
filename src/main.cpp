//
//  main.cpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 26/04/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#include "../src/Game/Game.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    srand((unsigned)time(NULL));
    Game *g = new Game();
    return 0;
}
