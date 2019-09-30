#include "RemoteControlPlane.h"
#include <iostream>

void RemoteControlPlane::on(){
    if(!On){
        cout << "RC plane is turned on." << endl;
        On = true;
    } else {
        cout << "RC plane HAS ALREADY BEEN turned on." << endl;
    }
}

void RemoteControlPlane::off(){
    if(On){
        cout << "RC plane is turned off." << endl;
        On = false;
    } else {
        cout << "RC plane HAS ALREADY BEEN turned off." << endl;
    }
}

void RemoteControlPlane::forward(){
    if(On){
        cout << "RC plane pulls up into a vertical climb." << endl;
    } else {
        cout << "RC plane cannot move forward - not turned on." << endl;
    }
}

void RemoteControlPlane::backward(){
    if(On){
        cout << "RC plane points its nose down into a dive." << endl;
    } else {
        cout << "RC plane cannot move backward - not turned on." << endl;
    }
}