#ifndef REMOTECONTROLCAR_H
#define REMOTECONTROLCAR_H

#include "RemoteControlVehicle.h"
#include <vector>
#include <string>

using namespace std;

  class RemoteControlCar : public RemoteControlVehicle {
		
	public:
            void on();
            void off();
            void forward();
            void backward();
          
	};

#endif