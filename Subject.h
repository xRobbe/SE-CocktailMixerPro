//@(#) Subject.h

#ifndef SUBJECT_H_H
#define SUBJECT_H_H

#include "Observer.h"
#include "vector"
#include "algorithm"
//
class Subject
{
	
public:
	//
	void attach(Observer * observer);
	//
	void detach(Observer * observer);
	//
	void notify(long int iGewicht);
	
private:
	//
	std::vector<Observer *> observers;
	
	

};

#endif
