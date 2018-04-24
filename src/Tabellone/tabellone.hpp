#ifndef tabellone_hpp
#define tabellone_hpp

#include <stdio.h>
#include "casella.hpp"

struct tabellone {
    casella c;
    tabellone* next;
};
typedef tabellone *tab;

tab initTabellone ();
void stampaTabellone(tab t);


#endif /* tabellone_hpp */
