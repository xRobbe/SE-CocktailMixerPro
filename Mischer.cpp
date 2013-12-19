//@(#) Mischer.cpp


#include "Mischer.h"

//
Mischer::Mischer()
{
	
}

void Mischer::mischen(long int iSekunden, bool bTurbo){
    this->bTurbo = bTurbo;
    std::cout << "----- Mischen beginnt -----" << std::endl;
    for(int i = 0; i < iSekunden; i++){
        msleep(1000);
        std::cout << "*" << std::flush;
    }
    std::cout << std::endl;
    std::cout << "----- Mischen beendet -----" << std::endl;
    std::cout << "____________________\n\n" << std::endl;
}

void Mischer::msleep ( long milliseconds ) {
    if(bTurbo == true)
        milliseconds = milliseconds / 10;
    clock_t limit;
    clock_t now = clock();
    limit = now + milliseconds * CLOCKS_PER_SEC /1000;
    while ( limit > now )
    now = clock();
}