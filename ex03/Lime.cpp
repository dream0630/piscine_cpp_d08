#include "Lime.h"

Lime::Lime() : Lemon()
{
  this->_name = "lime";
  this->_vitamins = 2;
}

Lime::~Lime()
{
}

std::string		Lime::getName() const
{
  return this->_name;
}
/*dream0630*/
