#ifndef _COCONUT_H_
#define _COCONUT_H_

#include "Fruit.h"

class Coconut : public Fruit
{
 public:
  Coconut();
  ~Coconut();

  virtual std::string	getName() const;
};

#endif /* dream0630 */
