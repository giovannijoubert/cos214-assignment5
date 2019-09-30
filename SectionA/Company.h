#ifndef COMPANY_H
#define COMPANY_H

#include "Colleague.h"
#include "AccountActivation.h"
#include <vector>
#include <string>

using namespace std;

  class Company : public Colleague {
		
	public:
            Company(string, string);
            void addItem(string itemName, string category);
            void sendNotification(string Message, string itemName, string category);
            string getName();

            //task3
            void update(); 
    private: 
            string companyName; //company’s registered name
            string address;
	};

#endif