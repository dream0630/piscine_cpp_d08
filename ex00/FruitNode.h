#ifndef _FRUITNODE_H
#define _FRUITNODE_H

#include "Fruit.h"

typedef struct s_FruitNode FruitNode;

struct s_FruitNode {

  Fruit		*fruit;
  FruitNode	*next;

};

#endif /*dream.0630 */
