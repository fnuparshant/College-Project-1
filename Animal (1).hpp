#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Animal
{
private:
string name_;
bool domestic_;
bool predator_;

public:
Animal();
Animal(string name, bool domestic=false, bool predator=false);
string getName() ;
bool isDomestic() ;
bool isPredator() ;
void setName(string name);
void setDomestic();
void setPredator();
	
};

