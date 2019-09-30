#include "TurnOff.h"
#include <iostream>

void TurnOff::execute(){
    receiver->off();
}

void TurnOff::undo(){
    receiver->on();
}