#include "FruitBox.h"

FruitBox::FruitBox(int size) {
  this->_BoxSize = size;
  this->_Fruits = NULL;
}

FruitBox::~FruitBox() {
  FruitNode	*Docker;

  while (this->_Fruits) {
    if ((Docker = this->_Fruits)) {
      delete Docker;
    }
    this->_Fruits = this->_Fruits->next;
  }
}

int FruitBox::nbFruits() const {
  FruitNode	*Voyager;
  int		FruitNb = 0;

  Voyager = this->_Fruits;
  while (Voyager) {
    FruitNb += 1;
    Voyager = Voyager->next;
  }
  return FruitNb;
}

bool FruitBox::putFruit(Fruit *fruit) {
  if (this->nbFruits() == this->_BoxSize) {
    return false;
  }

  if (this->isFruitPresent(fruit)) {
    return false;
  }

  FruitNode	*Voyager = this->_Fruits;
  FruitNode	*NewFruit = new FruitNode;

  NewFruit->fruit = fruit;
  NewFruit->next = NULL;

  if (!this->_Fruits) {
    this->_Fruits = NewFruit;
    return true;
  }
  while (Voyager->next) {
    Voyager = Voyager->next;
  }
  Voyager->next = NewFruit;
  return true;
}

Fruit *FruitBox::pickFruit() {
  if (!this->_Fruits) {
    return NULL;
  }
  FruitNode	*Docker;
  Fruit		*Docker_F;

  Docker = this->_Fruits;
  this->_Fruits = this->_Fruits->next;

  Docker_F = Docker->fruit;
  delete Docker;
  return Docker_F;
}

FruitNode *FruitBox::head() const {
  return this->_Fruits;
}

bool FruitBox::isFruitPresent(Fruit *fruit) {
  FruitNode *Voyager = this->_Fruits;

  while (Voyager) {
    if (Voyager->fruit == fruit) {
      return true;
    }
    Voyager = Voyager->next;
  }
  return false;
} /* dream/0630 */
