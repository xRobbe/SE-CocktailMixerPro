//@(#) Dosierer.cpp


#include "Dosierer.h"
//

//
std::string Dosierer::getInhalt() {
    return sInhalt;
}

//

//
Dosierer::Dosierer(std::string sZutat) {
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
void Dosierer::update()
{
	
}
