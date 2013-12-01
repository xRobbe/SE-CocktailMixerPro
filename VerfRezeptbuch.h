//@(#) VerfRezeptbuch.h

#ifndef VERFREZEPTBUCH_H_H
#define VERFREZEPTBUCH_H_H

#include "code/Rezeptbuch/Rezeptbuch.h"
#include "Dosierer.h"
#include "vector"
#include "iostream"
//
class VerfRezeptbuch: public Rezeptbuch
{
	
public:
	//
	~VerfRezeptbuch();
	//
	VerfRezeptbuch(std::vector<Dosierer*> dosierer);
	
};

#endif
