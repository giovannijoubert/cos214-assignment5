#ifndef TURNON_H
#define TURNON_H

#include "Command.h"
#include <vector>
#include <string>

using namespace std;

  class TurnOn : public Command {
		
	public:
             void execute();
             void undo();
          
	};

#endif