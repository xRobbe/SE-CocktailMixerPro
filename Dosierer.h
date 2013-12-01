//@(#) Dosierer.h

#ifndef DOSIERER_H_H
#define DOSIERER_H_H

#include "string"
#include "Zutatentyp.h"
//Dosiert die Menge einer Zutat
class Dosierer
{
	
public:
	//
	Dosierer(std::string sZutat);
	//
	std::string getInhalt();
	//
	Zutatentyp * getTyp();
	
private:
	//
	std::string sInhalt;
	
	//
	Zutatentyp * typ;
	
	
};

#endif