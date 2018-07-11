#ifndef __BANANA_H__
#define __BANANA_H__

#include <string>
#include "Fruit.h"

class		Banana : public Fruit
{
 public:
  Banana();
  ~Banana();

  virtual std::string		getName() const;
};

#endif /* dream.0630 */
