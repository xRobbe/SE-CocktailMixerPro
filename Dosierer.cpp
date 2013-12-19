//@(#) Dosierer.cpp


#include "Dosierer.h"
//

//
std::string Dosierer::getInhalt() {
    return sInhalt;
}

//

//
Dosierer::Dosierer(std::string sZutat, Waage* waage) {
    iGewichtErreichen = 0;
    this->waage = waage;
    sInhalt = sZutat;
    if (sZutat == "Eis") {
        typ = new Zutatentyp(0);
        return;
    }
    if (sZutat == "Limettenstuecke") {
        typ = new Zutatentyp(1);
        return;
    }
    typ = new Zutatentyp(2);
}

//

//
Zutatentyp * Dosierer::getTyp() {
    return typ;
}

//
void Dosierer::update(long int iGewicht)
{
    
    std::cout << "---------------\n" << "Delta Gewicht: " << waage->getDeltaGewich() << std::endl;
    std::cout << "Gesamtgewicht: " << waage->getGewicht() << std::endl;
    if(iGewicht < iGewichtErreichen){
        //TO DO: timer
        waage->setGewicht(typ->getMenge());
    } else {
        waage->detach(this);
    }
}


void Dosierer::mischen(int iMenge){
    iGewichtErreichen = iMenge;
    waage->attach(this);
    waage->setDeltaGewicht(0);
    waage->setGewicht(typ->getMenge());
}

void Dosierer::msleep ( long milliseconds ) {
  clock_t limit;
  clock_t now = clock();
  limit = now + milliseconds * CLOCKS_PER_SEC /1000;
  while ( limit > now )
  now = clock();
}