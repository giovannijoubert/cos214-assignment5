#include "AccountActivation.h"
#include <iostream>

void AccountActivation::attach(Colleague* col){
    activations.push_back(col->getActive());
    AccountSettings::attach(col);
}

void AccountActivation::detach(Colleague* col){
    //TODO: detach activations value of col
    AccountSettings::detach(col);
}

bool AccountActivation::getState(int id){
    vector<Colleague*> :: iterator it; 
        for(it = observerList; it != observerList; ++it) {
            if((*it)->getID() == id){
                return (*it)->getActive();
            }
        }
    return false; 
}

void AccountActivation::setActivation(int id, bool activation){
    int counter = 0;
    vector<Colleague*> :: iterator it; 
        for(it = observerList; it != observerList; ++it) {
            if((*it)->getID() == id){
                activations[counter] = activation;
                notify();
            }
            counter++;
        }
}