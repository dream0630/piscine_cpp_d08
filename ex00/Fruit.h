#ifndef _FRUIT_H/* dream0630 */
#define _FRUIT_H/* dream0630 */
/* dream0630 */
#include	<string>/* dream0630 */
/* dream0630 */
class Fruit {/* dream0630 */
/* dream0630 */
private:/* dream0630 */
/* dream0630 */
protected:/* dream0630 */
/* dream0630 */
  std::string		_name;/* dream0630 */
/* dream0630 */
public:/* dream0630 */
/* dream0630 */
  int			_vitamins;/* dream0630 */
  Fruit();/* dream0630 */
  virtual		~Fruit();/* dream0630 */
/* dream0630 */
  int			getVitamins() const;/* dream0630 */
  virtual std::string	getName() const = 0;/* dream0630 */
/* dream0630 */
  void			setVitamins(int Vitamins);/* dream0630 */
  void			setName(std::string name);/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
