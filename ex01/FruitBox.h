#ifndef FRUITBOX_H
#define FRUITBOX_H

#include "Fruit.h"
#include "FruitNode.h"

class FruitBox {
  int         _size;
  int         _nbrFruits;
  FruitNode   *_list;
public:
    FruitBox(int);
    ~FruitBox();

    int nbFruits() const;
    bool putFruit(Fruit* f);
    Fruit* pickFruit();
    FruitNode* head();
};

#endif
