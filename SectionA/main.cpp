#include <iostream>
#include "Company.h"
#include "Individual.h"
#include "AccountActivation.h"
#include "Notifier.h"

int main(){
    Company* Checkers = new Company("Checkers", "Midstream");
    Company* Spar = new Company("Spar", "Clubview");

    Individual* Ruan = new Individual("Ruan");
    Individual* Hendrik = new Individual("Hendrik");
    Individual* Frik = new Individual("Frik");

    Notifier* notifier = new Notifier("Dairy");
    notifier->addColleague(Checkers);
    notifier->addColleague(Ruan);
    notifier->addColleague(Frik);

    Checkers->addMediator(notifier);

    Checkers->addItem("Milk", "Dairy");

    AccountActivation * accountactivation = new AccountActivation();
    accountactivation->attach(Checkers);
    accountactivation->attach(Ruan);
    
}