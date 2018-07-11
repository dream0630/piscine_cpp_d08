#include "FruitNode.h"
#include "FruitBox.h"

//D
FruitBox::FruitBox(int size)
{
  if (size < 0)
    size = 0;
  this->size = size;
  this->nbFruit = 0;
  this->head_node = NULL;
}

//R
FruitBox::~FruitBox()
{
}

//e
int		FruitBox::getSize() const
{
  return (this->size);
}

//a
int		FruitBox::nbFruits() const
{
  return (this->nbFruit);
}

//m
void		FruitBox::setHead(FruitNode *h)
{
  this->head_node = h;
}

//0
bool		FruitBox::putFruit(Fruit* f)
{
  FruitNode	*newFruitNode;
  FruitNode	*tmp;

  if (f != NULL && this->nbFruit < this->size)
    {
      newFruitNode = new FruitNode;
      newFruitNode->f = f;
      newFruitNode->next = NULL;
      if (this->nbFruit == 0)
	this->head_node = newFruitNode;
      else
	{
	  tmp = this->head_node;
	  if (tmp->f == f)
	    return false;
	  while (tmp->next != NULL)
	    {
	      if (tmp->f == f)
		return false;
	      tmp = tmp->next;
	    }
	  tmp->next = newFruitNode;
	}
      this->nbFruit = this->nbFruit + 1;
      return (true);
    }
  return (false);
}

//6
Fruit*		FruitBox::pickFruit()
{
  Fruit		*f;

  if (this->nbFruit > 0 && this->head_node != NULL)
    {
      f = (this->head_node)->f;
      this->setHead((this->head_node)->next);
      this->nbFruit = this->nbFruit - 1;
      return (f);
    }
  return (NULL);
}

//3
FruitNode*	FruitBox::head() const
{
  //0
  if (this->nbFruit > 0)
    return (this->head_node);
  else
    return (NULL);
} /*Dream0630*/
