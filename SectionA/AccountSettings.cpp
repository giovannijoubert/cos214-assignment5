#include "AccountSettings.h"
#include <iostream>

AccountSettings::AccountSettings(){
    vector<Colleague*> observerList;
}

void AccountSettings::attach(Colleague* col){
    observerList.push_back(col);
}

void AccountSettings::detach(Colleague* col){
    vector<Colleague*> :: iterator it; 
        for(it = observerList.begin(); it != observerList.end(); ++it) {
            if((*it) == col){
                observerList.erase(it);
            } 
    }
    
}
void AccountSettings::notify(){
    vector<Colleague*> :: iterator it; 
        for(it = observerList.begin(); it != observerList.end(); ++it) {
            (*it)->update();
        }
}

vector<Colleague*> AccountSettings::getObserverList(){
    return observerList;
}