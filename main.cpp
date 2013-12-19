// Main.cpp 
// Programm zum Testen der Methodenaufrufe des Rezeptbuchs aus dem SWE Praktikum im WS 2013 
// Ralf Hahn,  04.10.2013

#include "VerfRezeptbuch.h"
#include "RezepturProzessor.h"

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    try{
        RezepturProzessor rp = RezepturProzessor();
        int iEingabe = 0;
        //rp.debug();
        cout << "Willkommen beim Cocktailmischer" << endl;
        cout << "Bitte waehlen Sie ein Cocktail aus\n" << endl;
        rp.printCocktail();
        cin >> iEingabe;
        cout << "\nMischen startet\n" << "-----------------------------\n"<< endl;
        rp.start(iEingabe);

        return 0;
    } catch (exception e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}
