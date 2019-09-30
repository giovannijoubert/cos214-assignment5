#ifndef MOVEBACKWARD_H
#define MOVEBACKWARD_H

#include "Command.h"
#include <vector>
#include <string>

using namespace std;

  class MoveBackward : public Command {
		
	public:
             MoveBackward(RemoteControlVehicle* r) : Command(r){};
             void execute();
             void undo();
	};

#endif