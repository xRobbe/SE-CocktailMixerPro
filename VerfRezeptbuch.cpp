//@(#) VerfRezeptbuch.cpp


#include <vector>

#include "VerfRezeptbuch.h"
#include "Rezeptbuch.h"
//

VerfRezeptbuch::~VerfRezeptbuch() {

}

//

VerfRezeptbuch::VerfRezeptbuch(std::vector<Dosierer*> dosierer) {
    int exists = 0;
    for (int i = getAnzahlRezepte() - 1; i >= 0; --i) {
        for (int j = 0; j < getRezept(i)->getAnzahlRezeptschritte(); ++j) {
            string zutat = getRezept(i)->getRezeptSchritt(j)->getZutat();
            if (zutat == "Mischen" || zutat == "Stampfen") {
                exists += 1;
                continue;
            }
            for (int k = 0; k < dosierer.size(); ++k) {
                string dzutat = dosierer.at(k)->getInhalt();
                if (dzutat == zutat) {
                    exists += 1;
                    break;
                }
            }
        }
        if (exists != getRezept(i)->getAnzahlRezeptschritte()) {
            deleteRezept(i);
        }
        exists = 0;
    }
}

