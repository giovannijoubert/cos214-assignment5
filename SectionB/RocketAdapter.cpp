#include "RocketAdapter.h"
#include <iostream>

RocketAdapter::RocketAdapter(RemoteControlRocket* rcr){
    adaptee = rcr;
}

void RocketAdapter::on(){
    if(!on){
        rcr->takeOff();
        on = true;
    } else {
        cout << "RC rocket HAS ALREADY BEEN turned on." << endl;
    }
}

void RocketAdapter::off(){
     if(on){
        rcr->stopLaunch();
        on = true;
    } else {
        cout << "RC rocket HAS ALREADY BEEN turned off." << endl;
    }
}

void RocketAdapter::forward(){
    if(on){
         rcr->increaseThrottle();
    } else {
        cout << "RC rocket cannot move forward - not turned on." << endl;
    }
}

void RocketAdapter::backward(){
    if(on){
        rcr->decreaseThrottle();
    } else {
        cout << "RC rocket cannot move backward - not turned on." << endl;
    }
}