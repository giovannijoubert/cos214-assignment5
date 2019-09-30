#include "Button.h"
#include <iostream>

Button::Button(Command* c){
    command = c;
}
void Button::press(){
    command->execute();
}