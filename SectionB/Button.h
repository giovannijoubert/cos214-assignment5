#ifndef BUTTON_H
#define BUTTON_H

#include "Command.h"
#include <vector>
#include <string>

using namespace std;

  class Button {
		
	public:
            Button(Command*);
            void press();
                          
    private: 
           Command* command;
          
	};

#endif