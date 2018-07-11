#ifndef BANANA_H
#define BANANA_H

#include "Fruit.h"

class           Banana : public Fruit {
 public:
  Banana();
  Banana(Banana const&);
  Banana& operator=(Banana const&);
  virtual ~Banana();

  virtual std::string  getName() const;
  virtual int           getVitamins() const;
};

#endif

