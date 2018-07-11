#ifndef _LEMON_H_
#define _LEMON_H_

#include <string>
#include "Fruit.h"

class Lemon : public Fruit
{
 public:
  Lemon();
  ~Lemon();

  virtual std::string	getName() const;
};

#endif /*dreAM0630 */
