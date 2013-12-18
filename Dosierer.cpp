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
    if(iGewicht < iGewichtErreichen){
        //TO DO: timer
        std::cout << waage->getGewicht() << " Gewicht enthalten"; //debug (auch waage getGewicht())
        waage->setGewicht(typ->getMenge());
    }
}


void Dosierer::mischen(int iMenge){
    std::cout << iMenge << std::endl;
    iGewichtErreichen = iMenge;
    waage->attach(this);
    waage->setGewicht(typ->getMenge());
}