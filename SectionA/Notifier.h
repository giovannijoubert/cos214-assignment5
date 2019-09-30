#ifndef NOTIFIER_H
#define NOTIFIER_H

#include "Mediator.h"
#include "Colleague.h"
#include <string>

using namespace std;

  class Notifier : public Mediator {
		
	public:
            void addItem(Colleague*, string itemName);
             
    private: 
           vector<Colleague*> colleagues;
           string category; //a single concrete mediator’s category, e.g. ”cars” or ”furniture”
            
	};

#endif