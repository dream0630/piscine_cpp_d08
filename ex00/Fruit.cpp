#include "Fruit.h"

//D
int Fruit::getVitamins() const 
{
  return this->_vitamins;
}

//R
void Fruit::setVitamins(int Vitamins) 
{
  this->_vitamins = Vitamins;
}

//E
void Fruit::setName(std::string name) 
{
  this->_name = name;
}

//A
Fruit::~Fruit() {

}

Fruit::Fruit() {
	//M
	this->_name = "";
	this->_vitamins = 0;
} /*dream 0630*/
