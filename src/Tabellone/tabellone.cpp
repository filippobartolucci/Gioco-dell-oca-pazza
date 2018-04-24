//
//  tabellone.cpp
//  G.O.P.
//
//  Created by Filippo Bartolucci on 24/04/18.
//  Copyright © 2018 Filippo Bartolucci. All rights reserved.
//

#include "tabellone.hpp"
#include <iostream>

tab initTabellone(){
    tab head=new tabellone;
    tab t=head;
    
    head->c.setInizio();
    
    for (int i=0;i<(rand() % 41) + 59;i++){
        t->next=new tabellone;
        t=t->next;
    }
    t->c.setArrivo();
    t->next=NULL;

    return head;
}

void stampaTabellone(tab t){
   
    /*
    if (t!=NULL){
        std::cout<<t->c.getTipo()<<"\t";
        stampaTabellone(t->next);
    }
    */
    
    int i=1;
    while (t!=NULL){
        cout <<i<<"-  "<<(t->c.getTipo())<<endl;
        t=t->next;
        i++;
    }
    /*
    for (int i=0;t!=NULL;i++){
        cout <<i+1<<"- "<<(t->c.getTipo());
    }*/
    
}
