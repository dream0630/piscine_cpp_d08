#include <string>
#include "Banana.h"

//D
Banana::Banana() : Fruit()
{
  this->_name = "banana";
  this->_vitamins = 5;
}

//R
Banana::~Banana()
{
}

//E
std::string	Banana::getName() const
{
	//a
	return (this->_name);
	//m
} /*  dream0630 */
