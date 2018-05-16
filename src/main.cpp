#include <iostream>
#include "casella.hpp"
#include "tabellone.hpp"
#include "utils.hpp"
#include <time.h>
#include "../G.O.P./Giocatore/giocatore.hpp"
#include "../G.O.P./Game/Game.hpp"



using namespace std;

int main() {
    
    srand((unsigned)time(NULL));
    
    tabellone tab = tabellone();
    tab.stampaTabellone();
    
    cout <<endl;
    cout <<endl;
    cout <<endl;
    
    giocatore g= giocatore("A", 5);
    while (g.getPos()!=tab.getDim()){
        turn(g, tab);
    }
}
