#ifndef _FRUIT_H
#define _FRUIT_H

#include	<string>

class Fruit {

private:

protected:

  std::string		_name;

public:

  int			_vitamins;
  Fruit();
  virtual		~Fruit();

  int			getVitamins() const;
  virtual std::string	getName() const = 0;

  void			setVitamins(int Vitamins);
  void			setName(std::string name);
};


#endif /* dream*0630 */
