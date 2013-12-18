//@(#) Entleerer.h

#ifndef ENTLEERER_H_H
#define ENTLEERER_H_H

#include "Observer.h"
#include "Waage.h"
//Entleert den Inhalt der Mischschüssel
class Entleerer: Observer
{
	
public:
	//
	Entleerer(Waage* waage);
	//
	void setOffen(bool bOffen);
	

	//
	void update();
	private:
	//
	bool bOffen;
	
	

	//
	Waage * waage;
	
};

#endif
