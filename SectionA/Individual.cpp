#include "Individual.h"
#include <iostream>

Individual::Individual(string n){
    name = n;
}

void Individual::addItem(string itemName, string category){
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

void Individual::sendNotification(string Message, string itemName, string category){
    setLatestNotification(Message);
    cout << name << " has been notified of " << itemName << " in the " << category << " marketplace." << endl;
}

void Individual::update(){
    active = ((AccountActivation*) getSubject())->getState(getID());
}

string Individual::getName(){
    return name;
}