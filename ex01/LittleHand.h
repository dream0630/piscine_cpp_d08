#ifndef LITTLEHAND_H
#define LITTLEHAND_H

#include <iostream>
#include "Lemon.h"
#include "FruitBox.h"

class           LittleHand {
 public:
  static void sortFruitBox(FruitBox& unsorted,
			   FruitBox& lemons,
			   FruitBox& bananas,
			   FruitBox& limes);

};

#endif
