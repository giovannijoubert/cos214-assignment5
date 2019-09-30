#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "Colleague.h"
#include <vector>
#include <string>

using namespace std;

  class Mediator {
		
	public:
            Mediator(string cat);
            void addColleague(Colleague*);
            virtual void addItem(Colleague*, string itemName)=0;
            
    private: 
           vector<Colleague*> colleagues;
           string category; //a single concrete mediator’s category, e.g. ”cars” or ”furniture”
            
	};

#endif