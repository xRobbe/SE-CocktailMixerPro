//@(#) Zutatentyp.cpp


#include "Zutatentyp.h"
#include "string"
//

int Zutatentyp::getMenge() {
    return menge;
}

//

int Zutatentyp::getTyp() {
    return typ;
}

//

Zutatentyp::Zutatentyp(int typ) {
    switch (typ) {
            //Eis
        case 0:
            menge = 20;
            zeit = 1000;
            break;
            //Limettenstücke
        case 1:
            menge = 10;
            zeit = 1000;
            break;
            //Alles andere
        case 2:
            menge = 1;
            zeit = 250;
            break;
    }
}

//

int Zutatentyp::getZeit() {
    return zeit;
}

