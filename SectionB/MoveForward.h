#ifndef MOVEFORWARD_H
#define MOVEFORWARD_H

#include "Command.h"
#include <vector>
#include <string>

using namespace std;

  class MoveForward : public Command {
		
	public:
             MoveForward(RemoteControlVehicle* r) : Command(r){};
             void execute();
             void undo();
          
	};

#endif