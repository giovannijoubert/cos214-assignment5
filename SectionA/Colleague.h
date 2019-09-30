#ifndef COLLEAGUE_H
#define COLLEAGUE_H

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

            string getName();
            vector<Mediator*> getMediators();
            void setLatestNotification(string);
            int getID();

            //task3
            bool getActive();
            AccountSettings* getSubject();
            void setSubject(AccountSettings*);
    
    private: 
           vector<Mediator*> mediators;
           string latestNotification; 
           int id; //TODO: IMPLEMENT static counter

           //task3
           bool active;
           AccountSettings* subject;
	};

#endif