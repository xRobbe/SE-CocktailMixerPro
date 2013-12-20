//@(#) Stampfer.h

#ifndef STAMPFER_H_H
#define STAMPFER_H_H

#include "iostream"
#include "ctime"

//Stampft den Inhalt der Mischschüssel
class Stampfer
{
	
public:
	//
	Stampfer();
        
        //
	void stampfen(long int iSekunden, bool bTurbo);
        
        //
	void msleep(long milliseconds);
	
private:
	//
	bool bTurbo;
	
};

#endif
