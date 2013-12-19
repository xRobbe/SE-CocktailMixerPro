//@(#) Mischer.h

#ifndef MISCHER_H_H
#define MISCHER_H_H

#include "ctime"
#include "iostream"

//Mischt den Inhalt der Mischschüssel
class Mischer
{
	
public:
	//
	Mischer();
	//
	void mischen(long int iSekungen, bool bTurbo);
        
        void msleep ( long milliseconds );
	
private:
    bool bTurbo;
	
};

#endif
