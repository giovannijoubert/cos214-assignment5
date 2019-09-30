#ifndef COLLEAGUE_H
#define COLLEAGUE_H

class AccountSettings;
class Mediator;

#include "AccountSettings.h"
#include "Mediator.h"
#include <vector>
#include <string>

using namespace std;

  class Colleague {
		
	public:
            Colleague(); //initialises the empty mediators vector, sets active to true
            void addMediator(Mediator*);
            virtual void addItem(string itemName, string category)=0;
            virtual void sendNotification(string Message, string itemName, string category)=0;
            virtual void update()=0;

            virtual string getName()=0;
            vector<Mediator*> getMediators();
            void setLatestNotification(string);
            int getID();

            //task3
            bool getActive();
            AccountSettings* getSubject();
            void setSubject(AccountSettings*);
    
    protected:
            bool active;

    private: 
           vector<Mediator*> mediators;
           string latestNotification; 
            static int id; //TODO: IMPLEMENT static counter
            int currentID;

           AccountSettings* subject;
	};

#endif