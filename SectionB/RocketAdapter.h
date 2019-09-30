#ifndef ROCKETADAPTER_H
#define ROCKETADAPTER_H

#include "RemoteControlVehicle.h"
#include "RemoteControlRocket.h"
#include <string>

using namespace std;

  class RocketAdapter : RemoteControlVehicle {
		
	public:
           RocketAdapter(RemoteControlRocket*);
           void on();
           void off();
           void forward();
           void backward();
                          
    private: 
           RemoteControlRocket* adaptee;
          
	};

#endif