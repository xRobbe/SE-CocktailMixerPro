//@(#) RezepturProzessor.h

#ifndef REZEPTURPROZESSOR_H_H
#define REZEPTURPROZESSOR_H_H


#include "Entleerer.h"
#include "Mischer.h"
#include "Stampfer.h"
#include "Waage.h"
#include "VerfRezeptbuch.h"
#include "Dosierer.h"
#include "vector"
#include "error.h"
#include "iostream"
//Steuert den Ablauf des Rezeptes. Ließt das Rezept aus dem VerfRezeptbuch.
class RezepturProzessor
{
//
	std::vector<Dosierer *> dosierer;
	//
	Entleerer * entleerer;
	//
	long int * iTimerMulti;
	//
	Mischer * mischer;
	//
	Stampfer * stampfer;
	//
	VerfRezeptbuch * vrBuch;
	//
	Waage * waage;
public:
	//
	RezepturProzessor();
    //
	void createDosierer(std::string fileName);
    //
	void debug();
};

#endif
