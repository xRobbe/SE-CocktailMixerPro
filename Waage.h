//@(#) Waage.h

#ifndef WAAGE_H_H
#define WAAGE_H_H

#include "Subject.h"
//Wiegt den Inhalt der Mischschüssel
class Waage: public Subject
{
	
public:
	//
	long int getDeltaGewich();
        void setDeltaGewicht(long int iGewichtDelta);
        void updateDeltaGewicht(long int iGewichtDazu);
	//
	long int getGewicht();
	//
	void setGewicht(long int iMenge);
	//
	Waage();
	
private:
	//
	long int iGewicht;
	
	//
	long int iGewichtDelta;
        
        
};

#endif
