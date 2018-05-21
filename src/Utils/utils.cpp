//  utils.cpp

#include <iostream>
#include "utils.hpp"
#include <stdio.h>
#include<ctime> // per time()
#include<cstdlib>   // per srand() and rand()

using namespace std;
int dice () {
    int n = (rand() % 6) + 1;
    return n ;
}

void stampaDado() {
    /*
    std::cout<<endl;
    std::cout<<"   ______   "<<endl;
    std::cout<<"  /     /\\   " <<endl;
    std::cout<<" /  '  /  \\"<<endl;
    std::cout<<"/_____/. . \\ "<<endl;
    std::cout<<"\\ . . \\    / "<<endl;
    std::cout<<" \\ . . \\  /   "<<endl;
    std::cout<<"  \\_____\\/ "<<endl<<endl;*/
    
    cout<<" _______"<<endl;
    cout<<"|       |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"|       |"<<endl;
    cout<<" -------"<<endl;
    
}
