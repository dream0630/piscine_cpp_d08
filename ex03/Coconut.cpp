#include <string>
#include "Coconut.h"

//D
Coconut::Coconut() : Fruit()
{
  this->_name = "coconut";
  this->_vitamins = 15;
}

//R
Coconut::~Coconut()
{
}

//E
std::string	Coconut::getName() const
{
	//A
	return (this->_name);
	//M
}/* dream*0630*/
