//@(#) Waage.cpp


#include "Waage.h"
//
long int Waage::getDeltaGewich()
{
	return iGewichtDelta;
}

void Waage::setDeltaGewicht(long int iGewichtDelta)
{
    this->iGewichtDelta = iGewichtDelta;
}

void Waage::updateDeltaGewicht(long int iGewichtDazu){
    this->iGewichtDelta = iGewichtDazu;
}
//
void Waage::setGewicht(long int iMenge)
{
    iGewicht = iGewicht + iMenge;
    iGewichtDelta = iGewichtDelta + iMenge;
    notify(iGewichtDelta);
}

//
long int Waage::getGewicht()
{
	return iGewicht;
}

//
Waage::Waage()
{
    iGewicht = 0;
}

