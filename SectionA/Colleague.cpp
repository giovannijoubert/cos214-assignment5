#include "Colleague.h"
#include <iostream>

Colleague::Colleague(){
    vector<Mediator*> mediators;
    active = true;
}

void Colleague::addMediator(Mediator* med){
    mediators.push_back(med);
}

vector<Mediator*> Colleague::getMediators(){
    return mediators;
}

void Colleague::setLatestNotification(string n){
    latestNotification = n;
}

bool Colleague::getActive(){
    return active;
}

AccountSettings* Colleague::getSubject(){
    return subject;
}

void Colleague::setSubject(AccountSettings* as){
    subject = as;
}

int Colleague::getID(){
    return id;
}