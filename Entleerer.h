//@(#) Entleerer.h

#ifndef ENTLEERER_H_H
#define ENTLEERER_H_H

#include "Observer.h"
#include "Waage.h"
#include "iostream"
//Entleert den Inhalt der Mischschüssel
class Entleerer: Observer
{
	
public:
	//
	Entleerer(Waage* waage);
	//
	void entleeren();
	
        void msleep ( long milliseconds );

	//
	void update(long int iGewicht);
	private:
	//

	
	

	//
	Waage * waage;
	
};

#endif
