#ifndef NOTIFIER_H
#define NOTIFIER_H

#include "Mediator.h"
#include "Colleague.h"
#include <string>

using namespace std;

  class Notifier : public Mediator {
		
	public:
            Notifier(string cat) : Mediator(cat){};
            void addItem(Colleague*, string itemName);
             
	};

#endif