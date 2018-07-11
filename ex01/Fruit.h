#ifndef FRUIT_H
#define FRUIT_H

#include <iostream>

class		Fruit {
 protected:
  int           _vitamins;
  std::string	_name;

 public:
  explicit Fruit(int vitamins, std::string const& name);
  explicit Fruit(Fruit const&);
  Fruit& operator=(Fruit const&);
  virtual ~Fruit();

  //Getters
  virtual std::string	getName() const = 0;
  virtual int		getVitamins() const = 0;

};

#endif
