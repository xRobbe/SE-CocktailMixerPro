//@(#) Dosierer.h

#ifndef DOSIERER_H_H
#define DOSIERER_H_H


#include "Observer.h"
#include "Waage.h"
#include "string"
#include "Zutatentyp.h"
#include "iostream"
//Dosiert die Menge einer Zutat
class Dosierer: public Observer
{
	
public:
	//
	Dosierer(std::string sZutat, Waage* waage);
	//
	std::string getInhalt();
	//
	Zutatentyp * getTyp();
	
	//
        void update(long int iGewicht);
        
        void mischen(int iMenge);
        
        void msleep ( long milliseconds );
        
	private:
	//
	std::string sInhalt;
	
	//
	Zutatentyp * typ;

	//
	Waage * waage;
        
private:
    int iGewichtErreichen;
	
};

#endif
