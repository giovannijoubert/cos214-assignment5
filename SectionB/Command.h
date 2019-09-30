#ifndef COMMAND_H
#define COMMAND_H

#include "RemoteControlVehicle.h"
#include <vector>
#include <string>

using namespace std;

  class Command {
		
	public:
            Command(RemoteControlVehicle*);
            virtual void execute()=0;
            virtual void undo()=0;
                          
    private: 
           RemoteControlVehicle* receiver;
          
	};

#endif