//@(#) Waage.cpp


#include "Waage.h"
//
double Waage::getDeltaGewich()
{
	return iGewichtDelta;
}

//
void Waage::setDeltaGewicht(double iGewichtDelta)
{
    this->iGewichtDelta = iGewichtDelta;
}

//
void Waage::updateDeltaGewicht(double iGewichtDazu){
    this->iGewichtDelta = iGewichtDazu;
}
//
void Waage::setGewicht(double iMenge)
{
    iGewicht = iGewicht + iMenge;
    iGewichtDelta = iGewichtDelta + iMenge;
    notify(iGewichtDelta);
}

//
double Waage::getGewicht()
{
	return iGewicht;
}

//
void Waage::setoffen(){
    iGewicht = iGewicht - 25;
    notify(iGewicht);
}

//
void Waage::setGrundgewicht(){
    iGewicht = 0;
    iGewichtDelta = 0;
}

//
Waage::Waage()
{
    iGewicht = 0;
}

