#ifndef _FRUITBOX_H
#define _FRUITBOX_H

#include "Fruit.h"
#include "FruitNode.h"

class FruitBox {

private:

  FruitNode		*_Fruits;
  int			_BoxSize;

public:

  FruitBox(int size);
  ~FruitBox();

  int			nbFruits() const;
  bool			putFruit(Fruit *fruit);
  bool			isFruitPresent(Fruit *fruit);
  Fruit			*pickFruit();
  FruitNode		*head() const;
};


#endif /* dream-0630*/
