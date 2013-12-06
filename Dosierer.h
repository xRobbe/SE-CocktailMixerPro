//@(#) Dosierer.h

#ifndef DOSIERER_H_H
#define DOSIERER_H_H


#include "Observer.h"
#include "Waage.h"
#include "string"
#include "Zutatentyp.h"
//Dosiert die Menge einer Zutat
class Dosierer: public Observer
{
	
public:
	//
	Dosierer(std::string sZutat);
	//
	std::string getInhalt();
	//
	Zutatentyp * getTyp();
	

	//
	void update();
	private:
	//
	std::string sInhalt;
	
	//
	Zutatentyp * typ;
	
	

	//
	Waage * waage;
	
};

#endif
