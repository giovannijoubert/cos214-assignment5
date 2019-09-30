#include "MoveForward.h"
#include <iostream>

void MoveForward::execute(){
    receiver->forward();
}

void MoveForward::undo(){
    receiver->backward();
}