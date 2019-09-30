#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include "Colleague.h"
#include <vector>
#include <string>

using namespace std;

  class Individual : public Colleague {
		
	public:
            Individual(string n);
            void addItem(string itemName, string category);
            void sendNotification(string Message, string itemName, string category);

            //task3
            void update();
            
    private: 
            string name; //individual’s name and surname 
	};

#endif