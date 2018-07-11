#ifndef LEMON_H
#define LEMON_H

#include "Banana.h"

class           Lemon : public Fruit {
 public:
  Lemon();
  Lemon(Lemon const&);
  Lemon& operator=(Lemon const&);
  virtual ~Lemon();

  virtual std::string  getName() const;
  virtual int           getVitamins() const;
};

#endif

