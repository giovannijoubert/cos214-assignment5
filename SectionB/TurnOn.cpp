#include "TurnOn.h"
#include <iostream>

void TurnOn::execute(){
    receiver->on();
}

void TurnOn::undo(){
    receiver->off();
}