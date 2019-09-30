#ifndef REMOTECONTROLVEHICLE_H
#define REMOTECONTROLVEHICLE_H

#include <vector>
#include <string>

using namespace std;

  class RemoteControlVehicle {
		
	public:
           RemoteControlVehicle();
           virtual void on()=0;
           virtual void off()=0;
           virtual void forward()=0;
           virtual void backward()=0;
                          
    private: 
           bool on;
          
	};

#endif