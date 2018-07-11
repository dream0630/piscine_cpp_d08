#ifndef FRUITNODE_H
#define FRUITNODE_H

#include "Fruit.h"

typedef struct          s_FruitNode {
    Fruit               *fruit;
    struct s_FruitNode  *next;
}                       FruitNode;

#endif
