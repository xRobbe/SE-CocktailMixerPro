//@(#) Waage.h

#ifndef WAAGE_H_H
#define WAAGE_H_H

#include "Subject.h"
//Wiegt den Inhalt der Mischschüssel
class Waage: public Subject
{
	
public:
	//
	double getDeltaGewich();
        //
	void setDeltaGewicht(double iGewichtDelta);
        //
	void updateDeltaGewicht(double iGewichtDazu);
	//
	double getGewicht();
	//
	void setGewicht(double iMenge);
        //
	void setoffen();
        
        //
	void setGrundgewicht();
	//
	Waage();
	
private:
	//
	double iGewicht;
	
	//
	double iGewichtDelta;
        
        
};

#endif
