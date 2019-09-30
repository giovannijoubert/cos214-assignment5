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

    Notifier* notifier1 = new Notifier("Dairy");
    Checkers->addMediator(notifier1);
    Checkers->addItem("Milk", "Dairy");

    Notifier* notifier2 = new Notifier("Dairy");
    Ruan->addMediator(notifier2);
    Ruan->addItem("Cheese", "Dairy");

    Frik->addItem("Dog", "Animals");

    AccountActivation * accountactivation = new AccountActivation();
    accountactivation->attach(Frik);
    accountactivation->attach(Ruan);

    Frik->sendNotification("New Item", "Milk", "Dairy");

}