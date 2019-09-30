#ifndef COMPANY_H
#define COMPANY_H

#include "Colleague.h"
#include <vector>
#include <string>

using namespace std;

  class Company : public Colleague {
		
	public:
            void addItem(string itemName, string category);
            void sendNotification(string Message, string itemName, string category);

            //task3
            void update(); 
    private: 
            string companyName; //company’s registered name
            string address;
	};

#endif