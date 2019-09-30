#include "Mediator.h"
#include <iostream>

Mediator::Mediator(string cat){
    category = cat;
}

void Mediator::addColleague(Colleague* colg){
    colleagues.push_back(colg);
}

string Mediator::getCategory(){
    return category;
}

vector<Colleague*> Mediator::getColleagues(){
    return colleagues;
}