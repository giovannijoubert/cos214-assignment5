#ifndef ACCOUNTSETTINGS_H
#define ACCOUNTSETTINGS_H

class Colleague;

#include "Colleague.h"
#include <vector>
#include <string>

using namespace std;

  class AccountSettings {
		
	public:
            AccountSettings(); //initialises the empty observerList vector
            virtual void attach(Colleague*);
            virtual void detach(Colleague*);
            void notify();
                          
            vector<Colleague*> getObserverList();
    private: 
            vector<Colleague*> observerList;
          
	};

#endif