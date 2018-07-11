#ifndef __FRUIT_H__
#define __FRUIT_H__

#include <string>

class		Fruit
{
 protected:
  std::string	_name;
  int		_vitamins;

 public:
  Fruit();
  ~Fruit();

  virtual std::string		getName() const = 0;
  int				getVitamins() const;
};

#endif /* dream0630*/
