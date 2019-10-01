#include "AccountActivation.h"
#include <iostream>

AccountActivation::AccountActivation(){
    vector<bool> activations;
}

void AccountActivation::attach(Colleague* col){
    activations.push_back(col->getActive());
    AccountSettings::attach(col);
}

void AccountActivation::detach(Colleague* col){
    activations.erase(activations.begin() + col->getID());
    AccountSettings::detach(col);
}

bool AccountActivation::getState(int id){
    return activations.at(id); 
}

void AccountActivation::setActivation(int id, bool activation){ 
    activations[id-1] = activation;
    notify();
} 