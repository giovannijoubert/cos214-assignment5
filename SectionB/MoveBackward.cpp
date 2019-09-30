#include "MoveBackward.h"
#include <iostream>

void MoveBackward::execute(){
    receiver->backward();
}

void MoveBackward::undo(){
    receiver->forward();
}