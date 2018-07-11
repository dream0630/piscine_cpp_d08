#include "Banana.h"

Banana::Banana() : Fruit(5, "banana") {}

Banana::Banana(Banana const &f) : Fruit(f.getVitamins(), f.getName()) {
}

Banana&  Banana::operator=(Banana const &f) {
  this->_name = f.getName();
  this->_vitamins = f.getVitamins();
  return *this;
}

Banana::~Banana() {}

std::string Banana::getName() const {
  return this->_name;
}
int Banana::getVitamins() const {
  return this->_vitamins;
}

