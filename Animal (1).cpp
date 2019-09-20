#include "Animal.hpp"



Animal::Animal()
{name_="";
domestic_=false;
predator_=false;
}

Animal::Animal(std::string name, bool domestic, bool predator)
{  name_=name;
   domestic_=domestic;
   predator_=predator;
}

string Animal::getName() {
	return name_;
}

bool Animal::isDomestic() {
	return domestic_;
}

bool Animal::isPredator() {
	return predator_;
}
void Animal::setName(string name) {
	name_ = name;
}

void Animal::setDomestic() {
	
	domestic_=true;

}

void Animal::setPredator() {
	
	predator_= true;

}



