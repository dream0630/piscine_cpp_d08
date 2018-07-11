#include "Banana.h"

//D
Banana::Banana() 
{
	this->setName("banana");
	this->setVitamins(5);
}

//R
Banana::~Banana() 
{
//E
}

//A
std::string Banana::getName() const 
{
	//M
	return this->_name;
} /* dream0630 */
