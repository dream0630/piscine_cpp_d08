#include "FruitBox.h"/* dream0630 */
/* dream0630 */
FruitBox::FruitBox(int size) {/* dream0630 */
  this->_BoxSize = size;/* dream0630 */
  this->_Fruits = NULL;/* dream0630 */
}/* dream0630 */
/* dream0630 */
FruitBox::~FruitBox() {/* dream0630 */
  FruitNode	*Docker;/* dream0630 */
/* dream0630 */
  while (this->_Fruits) {/* dream0630 */
    if ((Docker = this->_Fruits)) {/* dream0630 */
      delete Docker;/* dream0630 */
    }/* dream0630 */
    this->_Fruits = this->_Fruits->next;/* dream0630 */
  }/* dream0630 */
}/* dream0630 */
/* dream0630 */
int FruitBox::nbFruits() const {/* dream0630 */
  FruitNode	*Voyager;/* dream0630 */
  int		FruitNb = 0;/* dream0630 */
/* dream0630 */
  Voyager = this->_Fruits;/* dream0630 */
  while (Voyager) {/* dream0630 */
    FruitNb += 1;/* dream0630 */
    Voyager = Voyager->next;/* dream0630 */
  }/* dream0630 */
  return FruitNb;/* dream0630 */
}/* dream0630 */
/* dream0630 */
bool FruitBox::putFruit(Fruit *fruit) {/* dream0630 */
  if (this->nbFruits() == this->_BoxSize) {/* dream0630 */
    return false;/* dream0630 */
  }/* dream0630 */
/* dream0630 */
  if (this->isFruitPresent(fruit)) {/* dream0630 */
    return false;/* dream0630 */
  }/* dream0630 */
/* dream0630 */
  FruitNode	*Voyager = this->_Fruits;/* dream0630 */
  FruitNode	*NewFruit = new FruitNode;/* dream0630 */
/* dream0630 */
  NewFruit->fruit = fruit;/* dream0630 */
  NewFruit->next = NULL;/* dream0630 */
/* dream0630 */
  if (!this->_Fruits) {/* dream0630 */
    this->_Fruits = NewFruit;/* dream0630 */
    return true;/* dream0630 */
  }/* dream0630 */
  while (Voyager->next) {/* dream0630 */
    Voyager = Voyager->next;/* dream0630 */
  }/* dream0630 */
  Voyager->next = NewFruit;/* dream0630 */
  return true;/* dream0630 */
}/* dream0630 */
/* dream0630 */
Fruit *FruitBox::pickFruit() {/* dream0630 */
  if (!this->_Fruits) {/* dream0630 */
    return NULL;/* dream0630 */
  }/* dream0630 */
  FruitNode	*Docker;/* dream0630 */
  Fruit		*Docker_F;/* dream0630 */
/* dream0630 */
  Docker = this->_Fruits;/* dream0630 */
  this->_Fruits = this->_Fruits->next;/* dream0630 */
/* dream0630 */
  Docker_F = Docker->fruit;/* dream0630 */
  delete Docker;/* dream0630 */
  return Docker_F;/* dream0630 */
}/* dream0630 */
/* dream0630 */
FruitNode *FruitBox::head() const {/* dream0630 */
  return this->_Fruits;/* dream0630 */
}/* dream0630 */
/* dream0630 */
bool FruitBox::isFruitPresent(Fruit *fruit) {/* dream0630 */
  FruitNode *Voyager = this->_Fruits;/* dream0630 */
/* dream0630 */
  while (Voyager) {/* dream0630 */
    if (Voyager->fruit == fruit) {/* dream0630 */
      return true;/* dream0630 */
    }/* dream0630 */
    Voyager = Voyager->next;/* dream0630 */
  }/* dream0630 */
  return false;/* dream0630 */
} /* dream0630 */
