#ifndef ROCKETADAPTER_H
#define ROCKETADAPTER_H

#include "RemoteControlRocket.h"
#include <string>

using namespace std;

  class RocketAdapter {
		
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