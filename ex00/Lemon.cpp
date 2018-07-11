#include "Lemon.h"

Lemon::Lemon() {
  this->setName("lemon");
  this->setVitamins(3);
}

Lemon::~Lemon() {

}

std::string Lemon::getName() const {
  return this->_name;
} /* .dream0630*/
