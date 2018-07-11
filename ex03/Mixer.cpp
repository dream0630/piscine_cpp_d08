#include "Mixer.h"

//D
int		mixit(FruitBox &src)
{
  FruitNode	*list = src.head();
  int		nbr_vitamine = 0;

  while (list)
    {
      nbr_vitamine += list->f->getVitamins();
      list = list->next;
    }
  return nbr_vitamine;
}

//R
Mixer::Mixer()
{
  this->_plugged = false;
  this->_mixfunc = &mixit;
}

//E
Mixer::~Mixer()
{
}

//A
void	Mixer::connect()
{
	//M
  this->_plugged = true;
} /*dream0630*/
