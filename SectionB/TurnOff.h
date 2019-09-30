#ifndef TURNOFF_H
#define TURNOFF_H

#include "RemoteControlVehicle.h"
#include "Command.h"
#include <vector>
#include <string>

using namespace std;

  class TurnOff : public Command {
		
	public:

             TurnOff(RemoteControlVehicle* r) : Command(r){};
             void execute();
             void undo();
          
	};

#endif