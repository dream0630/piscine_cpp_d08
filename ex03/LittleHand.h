#ifndef _LITTLEHAND_H_
#define _LITTLEHAND_H_

#include <iostream>
#include <string>
#include "MixerBase.h"
#include "FruitBox.h"
#include "Coconut.h"
#include "Mixer.h"

class LittleHand
{
 public:
  LittleHand();
  ~LittleHand();

  static void sortFruitBox(FruitBox& unsorted, FruitBox& lemons, FruitBox& bananas, FruitBox& limes);
  static FruitBox * const * organizeCoconut(Coconut const * const * coconuts_packet);
  static void plugMixer(MixerBase &mixer);
};

#endif /* dream-0630 */
