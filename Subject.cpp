//@(#) Subject.cpp


#include "Subject.h"


void Subject::attach(Observer* observer){
    observers.push_back(observer);
}

void Subject::detach(Observer* observer){
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void Subject::notify(long int iGewicht)
{
    for(std::vector<Observer *>::const_iterator iter = observers.begin(); iter != observers.end(); ++iter)
    {
        if(iter < observers.end())
        {
            (*iter)->update(iGewicht);
        }
    }
}






