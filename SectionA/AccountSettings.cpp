#include "AccountSettings.h"
#include <iostream>

AccountSettings::AccountSettings(){
    vector<Colleague*> observerList;
}

void AccountSettings::attach(Colleague* col){
    observerList.push_back(col);
}

void AccountSettings::detach(Colleague* col){
    observerList.remove(col);
}
void AccountSettings::notify(){
    vector<Colleague*> :: iterator it; 
        for(it = observerList; it != observerList; ++it) {
            (*it)->update();
    }
}