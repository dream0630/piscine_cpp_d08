#include <iostream>

#include "Fruit.h"
#include "Banana.h"
#include "Lemon.h"
#include "Lime.h"
#include "Coconut.h"
#include "FruitBox.h"
#include "LittleHand.h"

//D
LittleHand::LittleHand()
{
}

//R
LittleHand::~LittleHand()
{
}

//E
void		LittleHand::sortFruitBox(FruitBox& unsorted, FruitBox& lemons, FruitBox& bananas, FruitBox& limes)
{
  int		nb = unsorted.nbFruits();
  int		i = 0;
  Fruit		*f;
  Lemon		*ptrLemon;
  Banana	*ptrBanana;
  Lime		*ptrLime;

  while (i < nb)
    {
      f = unsorted.pickFruit();

      ptrLemon = dynamic_cast<Lemon *>(f);
      ptrBanana = dynamic_cast<Banana *>(f);
      ptrLime = dynamic_cast<Lime *>(f);

      if (ptrLime)
	{
	  if (!limes.putFruit(f))
	    unsorted.putFruit(f);
	}
      else if (ptrBanana)
	{
	  if (!bananas.putFruit(f))
	    unsorted.putFruit(f);
	}
      else if (ptrLemon)
	{
	  if (!lemons.putFruit(f))
	    unsorted.putFruit(f);
	}
      else
	unsorted.putFruit(f);
      i++;
    }
}

//A
FruitBox * const * LittleHand::organizeCoconut(Coconut const * const * coconuts_packet)
{
  FruitBox	**box_of_coconut;
  int		count_coconut = 0;
  int		i = 0;
  int		j = 0;

  while (coconuts_packet[count_coconut])
    count_coconut++;
  box_of_coconut = new FruitBox*[(count_coconut / 6) + 2];
  for (i = 0; i < (count_coconut / 6) + 2; i++)
    box_of_coconut[i] = new FruitBox(6);
  i = 0;
  count_coconut = 0;
  while (coconuts_packet[count_coconut] != NULL)
    {
      if (j == 6)
	{
	  j = 0;
	  i = i + 1;
	}
      box_of_coconut[i]->putFruit(const_cast<Coconut *>(coconuts_packet[count_coconut]));
      j++;
      count_coconut++;
    }
  box_of_coconut[i + 1] = NULL;
  return box_of_coconut;
}

//M
void	LittleHand::plugMixer(MixerBase &mixer)
{
  Mixer &a = static_cast<Mixer &>(mixer);
  a.connect();
}/* dream0630*/
