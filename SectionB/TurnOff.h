#ifndef TURNOFF_H
#define TURNOFF_H

#include "Command.h"
#include <vector>
#include <string>

using namespace std;

  class TurnOff : public Command {
		
	public:
             void execute();
             void undo();
          
	};

#endif