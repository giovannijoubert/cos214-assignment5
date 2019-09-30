#include "Company.h"
#include <iostream>

Company::Company(string cName, string cAddress){
    companyName = cName;
    address = cAddress;
}

void Company::addItem(string itemName, string category){
    if(active){
        bool found = false;
        vector<Mediator*> :: iterator it; 
        for(it = getMediators().begin(); it != getMediators().end(); ++it) {
            if((*it)->getCategory() == category){
                (*it)->addItem(this, itemName);
                found = true;
            }
        }
        if (!found)
            cout << "No Mediator found with matching category" << endl;
    } else {
        cout << "Colleague is not set to active" << endl;
    }
}

void Company::sendNotification(string Message, string itemName, string category){
    setLatestNotification(Message);
    cout << companyName << " has been notified of " << itemName << " in the " << category << " marketplace." << endl;
}

void Individual::update(){
    active = getSubject()->getState(id);
}