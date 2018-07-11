#ifndef LIME_H
#define LIME_H

#include "Lemon.h"

class           Lime : public Lemon {
 public:
  Lime();
  Lime(Lime const&);
  Lime& operator=(Lime const&);
  virtual ~Lime();

  virtual std::string  getName() const;
  virtual int           getVitamins() const;
};

#endif
