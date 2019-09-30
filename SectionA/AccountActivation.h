#ifndef ACCOUNTACTIVATION_H
#define ACCOUNTACTIVATION_H

#include "Colleague.h"
#include "AccountSettings.h"
#include <vector>
#include <string>

using namespace std;

  class AccountActivation : public AccountSettings {
		
	public:
            void attach(Colleague*);
            void detach(Colleague*);
            bool getState(int id);
            void setActivation(int id, bool activation);
                          
    private: 
           vector<bool> activations;
          
	};

#endif