#ifndef _LEMON_H
#define _LEMON_H

#include "Fruit.h"

class Lemon : public Fruit {

private:

public:

  Lemon();
  virtual ~Lemon();

  virtual std::string		getName() const;
};


#endif /* =dream 0630= */
