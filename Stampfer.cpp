//@(#) Stampfer.cpp


#include "Stampfer.h"


//
Stampfer::Stampfer()
{
    
}

void Stampfer::stampfen(long int iSekunden){
    std::cout << "Stampfen beginnt" << std::endl;
    for(int i = 0; i < iSekunden; i++){
        msleep(1000);
        std::cout << "*" << std::flush;
    }
    std::cout << std::endl;
    std::cout << "Stampfen beendet" << std::endl;
}

void Stampfer::msleep ( long milliseconds ) {
  clock_t limit;
  clock_t now = clock();
  limit = now + milliseconds * CLOCKS_PER_SEC /1000;
  while ( limit > now )
  now = clock();
}