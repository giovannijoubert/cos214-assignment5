#include "Notifier.h"
#include <iostream>

void Notifier::addItem(Colleague* col, string itemName){
    string out;
    out = col->getName() + " has added " + itemName + " to the " + getCategory() + " marketplace.";

    cout << out << endl;

    vector<Colleague*> :: iterator it; 
    for(it = getColleagues().begin(); it != getColleagues().end(); ++it) {
        if((*it) != col){
            (*it)->sendNotification(out, itemName, getCategory());
        }
    }


}
