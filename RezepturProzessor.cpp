//@(#) RezepturProzessor.cpp

#include "string"
#include "RezepturProzessor.h"
#include "fstream"
#include "exception"

//
RezepturProzessor::RezepturProzessor() {
    createDosierer("zutaten.txt");
    vrBuch = new VerfRezeptbuch(dosierer);

}

//
void RezepturProzessor::createDosierer(std::string fileName) {
    try {
        ifstream in;
        in.open(fileName.c_str(), ios::in);
        if (!in) {
            error("File not found: " + fileName);
        }
        std::string line;
        while (getline(in, line)) {
            if(dosierer.size() >= 10)
                cout << "Maximum von 10 Dosierern erreicht" << endl;
            else
                dosierer.push_back(new Dosierer(line, waage));
        }
        in.close();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown Error" << std::endl;
    }
}

//
void RezepturProzessor::debug() {
    cout << vrBuch->getAnzahlRezepte() << endl;
    for (int i = 0; i < vrBuch->getAnzahlRezepte(); i++) {
        Rezept* r = vrBuch->getRezept(i);
        cout << i << ". " << r->getName() << endl;
//        for(int j = 0; j < r->getAnzahlRezeptschritte(); ++j) {
//            cout << "* " << j << r->getRezeptSchritt(j)->getZutat() << endl;
//        }
//        cout << endl;
    }

//        for (int i = 0; i < dosierer.size(); ++i) {
//            std::cout << "Inhalt: " << dosierer.at(i)->getInhalt() << std::endl;
//        }
    //    std::cout << std::endl;
    //    std::cout << std::endl;
    //    std::cout << std::endl;
    //    for (int i = 0; i < dosierer.size(); ++i) {
    //        std::cout << "Typ: " << dosierer.at(i)->getTyp()->getTyp() << std::endl;
    //        std::cout << "Zeit: " << dosierer.at(i)->getTyp()->getZeit() << std::endl;
    //        std::cout << "Menge: " << dosierer.at(i)->getTyp()->getMenge() << std::endl;
    //        std::cout << std::endl;
    //    }
}

void RezepturProzessor::printCocktail() {
    for (int i = 0; i < vrBuch->getAnzahlRezepte(); i++) {
        Rezept* r = vrBuch->getRezept(i);
        cout << i << ". " << r->getName() << endl;
        }
}

void RezepturProzessor::start(int iEingabe) {
   for(int i = 0; i <= vrBuch->getRezept(iEingabe)->getAnzahlRezeptschritte(); i++){
        string r = vrBuch->getRezept(iEingabe)->getRezeptSchritt(i)->getZutat();
        cout << r << endl;
        iSuchDosierer = 0;
        if(r == "Stampfen")
            stampfer->setAktiv(true);
        else{
            if(r == "Mischen")
                mischer->setAktiv(true);
            else{
                while(dosierer.at(iSuchDosierer)->getInhalt() != r)
                    iSuchDosierer += 1;
                dosierer.at(iSuchDosierer)->mischen(vrBuch->getRezept(iEingabe)->getRezeptSchritt(i)->getMenge());
            }
        }
    }
}