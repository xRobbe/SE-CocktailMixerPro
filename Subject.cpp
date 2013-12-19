//@(#) Subject.cpp


#include "Subject.h"


void Subject::attach(Observer* observer){
    observers.push_back(observer);
}

void Subject::detach(Observer* observer){
    observers.clear();
}

void Subject::notify(double iGewicht)
{
    std::vector<Observer *>::const_iterator iter = observers.begin();
    
    if(iter < observers.end())
    {
        (*iter)->update(iGewicht);
    }
    
}






