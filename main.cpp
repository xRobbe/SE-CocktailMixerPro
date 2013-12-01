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
    cout << "***********************************" << endl;
    rp.debug();
    

    return 0;
    } catch (exception e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}
