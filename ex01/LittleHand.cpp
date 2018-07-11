#include "LittleHand.h"

void LittleHand::sortFruitBox(FruitBox& unsorted,
                              FruitBox& lemons,
                              FruitBox& bananas,
                              FruitBox& limes) {
  FruitBox    tmp(unsorted.nbFruits());
  Fruit       *fruit;
  while ((fruit = unsorted.pickFruit())) {
    if (fruit->getName() == "lemon") {
      if (!lemons.putFruit(fruit))
	tmp.putFruit(fruit);
    }
    else if (fruit->getName() == "lime") {
      if (!limes.putFruit(fruit))
	tmp.putFruit(fruit);
    }
    else if (fruit->getName() == "banana") {
      if (!bananas.putFruit(fruit))
	tmp.putFruit(fruit);
    }
    else            tmp.putFruit(fruit);
  }
  while ((fruit = tmp.pickFruit())) {
    unsorted.putFruit(fruit);
  }
}

