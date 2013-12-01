//@(#) Dosierer.h

#ifndef DOSIERER_H_H
#define DOSIERER_H_H

#include "Zutatentyp.h"
#include "string"
//Dosiert die Menge einer Zutat
class Dosierer
{
	
public:
	//
	Dosierer(std::string sZutat);
	//
	void getInhalt();
	//
	Zutatentyp * getTyp();
	
private:
	//
	std::string sInhalt;
	
	//
	Zutatentyp * typ;
	
	
};

#endif
