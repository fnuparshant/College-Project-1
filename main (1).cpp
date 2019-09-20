#include "Animal.hpp"
#include<iostream>

int main()
{
	Animal anim("Cat",true,false);
	std::cout<<"Name:"<<anim.getName()<<std::endl;
	std::cout<<"Domestic:"<<anim.isDomestic()<<std::endl;
	std::cout<<"Predator: "<<anim.isPredator()<<std::endl;
	return 0;
}
/*
void setters(Animal anim);


void main() {
	cout << "Input file can't be open" << endl;

//	Animal anim;
	Animal anim = Animal("name", true, false);
	setters(anim);



}

void setters(Animal anim) {
	/*anim.setName("dog");
	anim.setDomestic(true);
	anim.setPredator(false);  
*/
/*	cout << anim.getName() << endl;
	cout << anim.isDomestic() << endl;
	cout << anim.isPredator() << endl;
	
}
*/
