//@(#) Entleerer.cpp


#include "Entleerer.h"
//
void Entleerer::entleeren()
{
    std::cout << "Behaelter wird geleert\n";
    waage->attach(this);
    waage->setoffen();
}

//
Entleerer::Entleerer(Waage* waage)
{
    this->waage = waage;
}


//
void Entleerer::update(long int iGewicht)
{
    msleep(1000);
    std::cout << "Gesamtgewicht: " << waage->getGewicht() << std::endl;
    if(iGewicht <= 0){
        //TO DO: timer
        waage->detach(this);
    } else {
        waage->setoffen();
    }
}

void Entleerer::msleep ( long milliseconds ) {
  clock_t limit;
  clock_t now = clock();
  limit = now + milliseconds * CLOCKS_PER_SEC /1000;
  while ( limit > now )
  now = clock();
}