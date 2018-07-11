#include "Lemon.h"
#include "FruitBox.h"

Fruit::Fruit(int vitamins, std::string const& name) : _vitamins(vitamins), _name(name) {}

Fruit::Fruit(Fruit const& f) : _vitamins(f._vitamins), _name(f._name) {
}

Fruit&	Fruit::operator=(Fruit const &f) {
  this->_name = f._name;
  this->_vitamins = f._vitamins;
  return *this;
}

Fruit::~Fruit() {}
