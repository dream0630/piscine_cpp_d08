#include "Lemon.h"

Lemon::Lemon() : Fruit(3, "lemon") {}

Lemon::Lemon(Lemon const& f) : Fruit(f.getVitamins(), f.getName()) {
}

Lemon&  Lemon::operator=(Lemon const &f) {
  this->_name = f.getName();
  this->_vitamins = f.getVitamins();
  return *this;
}

Lemon::~Lemon() {}

std::string Lemon::getName() const {
  return this->_name;
}
int Lemon::getVitamins() const {
  return this->_vitamins;
}

