//@(#) Zutatentyp.h

#ifndef ZUTATENTYP_H_H
#define ZUTATENTYP_H_H

#include "string"
//
class Zutatentyp
{
	
public:
	//
	int getMenge();
	//
	int getTyp();
	//
	int getZeit();
	//
	Zutatentyp(int typ);
	
private:
	//
	int zeit;
	
	//
	int menge;
	
	//
        int typ;
	
	
};

#endif
