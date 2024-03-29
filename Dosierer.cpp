//@(#) Dosierer.cpp


#include "Dosierer.h"
//

//

//
std::string Dosierer::getInhalt() {
    return sInhalt;
}

//

//

//
Dosierer::Dosierer(std::string & sZutat, Waage * waage) {
    iGewichtErreichen = 0;
    iRunde = 0;
    bOffen = false;
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

//
Zutatentyp * Dosierer::getTyp() {
    return typ;
}

//

//
void Dosierer::update(double iGewicht) {

    if (waage->getDeltaGewich() >= iGewichtErreichen) {
        std::cout << "\n----- Dosierer wird geschlossen -----" << std::endl;
        bOffen = false;
        std::cout << "\nDelta Gewicht: " << waage->getDeltaGewich() << std::endl;
        std::cout << "Gesamtgewicht: " << waage->getGewicht() << "\n____________________\n\n" << std::endl;
    }
}

//
void Dosierer::mischen(double iMenge, bool bTurbo) {
    this->bTurbo = bTurbo;
    iGewichtErreichen = iMenge;
    waage->attach(this);
    waage->setDeltaGewicht(0);
    std::cout << "----- Dosierer wird geoeffnet -----" << std::endl;
    waage->setDeltaGewicht(0);
    bOffen = true;
    while (bOffen) {
        waage->setGewicht(typ->getMenge());
        if (typ->getTyp() == 0 || typ ->getTyp() == 1) {
            msleep(1000);
            std::cout << "*" << std::flush;
        }
        if (typ->getTyp() == 2) {
            msleep(250);
            std::cout << "*" << std::flush;
        }
    }
    waage->detach(this);
}

//
void Dosierer::msleep(long milliseconds) {
    if (bTurbo == true)
        milliseconds = milliseconds / 10;
    clock_t limit;
    clock_t now = clock();
    limit = now + milliseconds * CLOCKS_PER_SEC / 1000;
    while (limit > now)
        now = clock();
}