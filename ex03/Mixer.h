#ifndef _MIXER_H_
#define _MIXER_H_

#include <string>
#include <iostream>
#include "MixerBase.h"

class Mixer : public MixerBase
{
 public:
  Mixer();
  ~Mixer();

  void		connect();
};

#endif /* dream.0630 */
