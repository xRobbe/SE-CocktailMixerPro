// Main.cpp 
// Programm zum Testen der Methodenaufrufe des Rezeptbuchs aus dem SWE Praktikum im WS 2013 
// Ralf Hahn,  04.10.2013

#include "VerfRezeptbuch.h"
#include "RezepturProzessor.h"

#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    bool bTurbo = false;
    try{
        RezepturProzessor rp = RezepturProzessor();
        cout << "Willkommen beim Cocktailmischer" << endl;
        while(true){
            int iEingabe = 0;
            //rp.debug();
            cout << "Bitte waehlen Sie ein Cocktail aus\n" << endl;
            cout << "100. Turbomodus an/aus\n404. Programm beenden\n" << endl;
            rp.printCocktail();
            cin >> iEingabe;
            if(iEingabe == 100){
                if(bTurbo == false){
                    bTurbo = true;
                    cout << "Turbomodus aktiviert\n" << endl;
                } else {
                    bTurbo = false;
                    cout << "Turbomodus deaktiviert\n" << endl;
                }
                
            } else {
                if(iEingabe == 404)
                    break;
                cout << "\nMischen startet\n" << "-----------------------------\n"<< endl;
                rp.start(iEingabe, bTurbo);
            }
        }
        return 0;
    } catch (exception e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}
