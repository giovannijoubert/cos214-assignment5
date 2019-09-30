#ifndef REMOTECONTROLPLANE_H
#define REMOTECONTROLPLANE_H

#include "RemoteControlVehicle.h"
#include <vector>
#include <string>

using namespace std;

  class RemoteControlPlane : public RemoteControlVehicle {
		
	public:
            void on();
            void off();
            void forward();
            void backward();
	};

#endif