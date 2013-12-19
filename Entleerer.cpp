//@(#) Entleerer.cpp


#include "Entleerer.h"
//
void Entleerer::entleeren(bool bTurbo)
{
    this->bTurbo = bTurbo;
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
void Entleerer::update(double iGewicht)
{
    msleep(1000);
    if(iGewicht <= 0){
        waage->setGrundgewicht();
        std::cout << "Gesamtgewicht: " << waage->getGewicht() << std::endl;
        waage->detach(this);
    } else {
        std::cout << "Gesamtgewicht: " << waage->getGewicht() << std::endl;
        waage->setoffen();
    }
}

void Entleerer::msleep ( long milliseconds ) {
    if(bTurbo == true)
        milliseconds = milliseconds / 10;
    clock_t limit;
    clock_t now = clock();
    limit = now + milliseconds * CLOCKS_PER_SEC /1000;
    while ( limit > now )
    now = clock();
}