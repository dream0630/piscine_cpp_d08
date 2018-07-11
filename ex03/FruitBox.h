#ifndef _FRUITBOX_H_
#define _FRUITBOX_H_

#include "Fruit.h"
#include "FruitNode.h"

class		FruitBox
{
 private:
  int		size;
  int		nbFruit;
  FruitNode	*head_node;

 public:
  FruitBox(int size);
  ~FruitBox();

  int		getSize() const;
  int		nbFruits() const;

  void		setHead(FruitNode *h);

  bool		putFruit(Fruit* f);
  Fruit*	pickFruit();
  FruitNode*	head() const;
};

#endif /* DREAM0630 */
