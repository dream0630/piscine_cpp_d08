#include <string>

#include "Lemon.h"

//DA
Lemon::Lemon() : Fruit()
{
  this->_name = "lemon";
  this->_vitamins = 3;
}

//RM
Lemon::~Lemon()
{
}

//E
std::string	Lemon::getName() const
{
  return (this->_name);
} /*dream0630*/
