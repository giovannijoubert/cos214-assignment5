#ifndef TURNON_H
#define TURNON_H

#include "RemoteControlVehicle.h"
#include "Command.h"
#include <vector>
#include <string>

using namespace std;

  class TurnOn : public Command {
		
	public:
             TurnOn(RemoteControlVehicle* r) : Command(r){};
             void execute();
             void undo();
          
	};

#endif