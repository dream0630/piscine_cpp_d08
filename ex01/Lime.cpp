#include "Lime.h"

Lime::Lime() {
  this->_name = "lime";
  this->_vitamins = 2;
}

Lime::Lime(Lime const &f) : Lemon() {
  this->_name = f.getName();
  this->_vitamins = f.getVitamins();
}

Lime&  Lime::operator=(Lime const &f) {
  this->_name = f.getName();
  this->_vitamins = f.getVitamins();
  return *this;
}

Lime::~Lime() {}

std::string Lime::getName() const {
  return this->_name;
}
int Lime::getVitamins() const {
  return this->_vitamins;
}

