#include "RemoteControlCar.h"
#include <iostream>

void RemoteControlCar::on(){
    if(!on){
        cout << "RC car is turned on." << endl;
        on = true;
    } else {
        cout << "RC car HAS ALREADY BEEN turned on." << endl;
    }
}

void RemoteControlCar::off(){
    if(on){
        cout << "RC car is turned off." << endl;
        on = true;
    } else {
        cout << "RC car HAS ALREADY BEEN turned off." << endl;
    }
}

void RemoteControlCar::forward(){
    if(on){
        cout << "RC car drives forward quickly." << endl;
    } else {
        cout << "RC car cannot move forward - not turned on." << endl;
    }
}

void RemoteControlCar::backward(){
    if(on){
        cout << "RC car reverses backward carefully." << endl;
    } else {
        cout << "RC car cannot move backward - not turned on." << endl;
    }
}