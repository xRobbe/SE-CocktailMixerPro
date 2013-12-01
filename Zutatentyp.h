//@(#) Zutatentyp.h

#ifndef ZUTATENTYP_H_H
#define ZUTATENTYP_H_H

#include "string"
//
class Zutatentyp
{
	
public:
	//
	long int getMenge();
	//
	void getTyp();
	//
	long double getZeit();
	//
	Zutatentyp(std::string sZutat);
	
private:
	//
	long double dZeit;
	
	//
	long int iMenge;
	
	//
	std::string sTyp;
	
	
};

#endif
