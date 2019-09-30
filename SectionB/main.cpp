#include <iostream>
#include "RemoteControlVehicle.h"
#include "RemoteControlRocket.h"
#include "RemoteControlPlane.h"
#include "RemoteControlCar.h"
#include "TurnOn.h"
#include "TurnOff.h"
#include "MoveForward.h"
#include "MoveBackward.h"
#include "Button.h"
#include "RocketAdapter.h"

int main(){
    //RC Plane
    RemoteControlPlane* rcp1 = new RemoteControlPlane();
    
    TurnOn* rcp1on = new TurnOn(rcp1);
    TurnOff* rcp1off = new TurnOff(rcp1);
    MoveForward* rcp1forward = new MoveForward(rcp1);
    MoveBackward* rcp1backward = new MoveBackward(rcp1);

    Button* rcp1btnon = new Button(rcp1on);
    Button* rcp1btnoff = new Button(rcp1off);
    Button* rcp1btnforward = new Button(rcp1forward);
    Button* rcp1btnbackward = new Button(rcp1backward);
    
    rcp1btnon->press();
    rcp1btnoff->press();
    rcp1btnforward->press();
    rcp1btnon->press();
    rcp1btnbackward->press();

    //RC Car
    RemoteControlCar* rcc1 = new RemoteControlCar();
    
    TurnOn* rcc1on = new TurnOn(rcc1);
    TurnOff* rcc1off = new TurnOff(rcc1);
    MoveForward* rcc1forward = new MoveForward(rcc1);
    MoveBackward* rcc1backward = new MoveBackward(rcc1);

    Button* rcc1btnon = new Button(rcc1on);
    Button* rcc1btnoff = new Button(rcc1off);
    Button* rcc1btnforward = new Button(rcc1forward);
    Button* rcc1btnbackward = new Button(rcc1backward);
    
    rcc1btnon->press();
    rcc1btnoff->press();
    rcc1btnforward->press();
    rcc1btnon->press();
    rcc1btnbackward->press();

    //Adapter
    RemoteControlRocket* rcr1 = new RemoteControlRocket();
    RocketAdapter* rocketadapter = new RocketAdapter(rcr1);

    rocketadapter->on();
    rocketadapter->off();
    rocketadapter->forward();
    rocketadapter->on();
    rocketadapter->backward();
       
}