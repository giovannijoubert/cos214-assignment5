#ifndef ACCOUNTSETTINGS_H
#define ACCOUNTSETTINGS_H

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
                          
    private: 
           vector<Colleague*> observerList;
          
	};

#endif