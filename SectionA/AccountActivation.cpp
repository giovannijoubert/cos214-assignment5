#include "AccountActivation.h"
#include <iostream>

void AccountActivation::attach(Colleague* col){
    activations.push_back(col->getActive());
    AccountSettings::attach(col);
}

void AccountActivation::detach(Colleague* col){
    activations.erase(activations.begin() + col->getID());
    AccountSettings::detach(col);
}

bool AccountActivation::getState(int id){
    vector<Colleague*> :: iterator it; 
        for(it = getObserverList().begin(); it != getObserverList().end(); ++it) {
            if((*it)->getID() == id){
                return (*it)->getActive();
            }
        }
    return false;  
}

void AccountActivation::setActivation(int id, bool activation){ 
    int counter = 0;
    vector<Colleague*> :: iterator it; 
        for(it = getObserverList().begin(); it != getObserverList().end(); ++it) {
            if((*it)->getID() == id){
                activations[counter] = activation;
                notify();
            }
            counter++; 
        }
} 