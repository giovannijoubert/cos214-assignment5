#include "RocketAdapter.h"
#include <iostream>

RocketAdapter::RocketAdapter(RemoteControlRocket* rcr){
    adaptee = rcr;
}

void RocketAdapter::on(){
    if(!On){
        adaptee->takeOff();
        On = true;
    } else {
        cout << "RC rocket HAS ALREADY BEEN turned on." << endl;
    }
}

void RocketAdapter::off(){
     if(On){
        adaptee->stopLaunch();
        On = false;
    } else {
        cout << "RC rocket HAS ALREADY BEEN turned off." << endl;
    }
}

void RocketAdapter::forward(){
    if(On){
         adaptee->increaseThrottle();
    } else {
        cout << "RC rocket cannot move forward - not turned on." << endl;
    }
}

void RocketAdapter::backward(){
    if(On){
        adaptee->decreaseThrottle();
    } else {
        cout << "RC rocket cannot move backward - not turned on." << endl;
    }
}