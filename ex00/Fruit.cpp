#include "Fruit.h"/* dream0630 */
/* dream0630 */
int Fruit::getVitamins() const /* dream0630 */
{/* dream0630 */
  return this->_vitamins;/* dream0630 */
}/* dream0630 */
/* dream0630 */
void Fruit::setVitamins(int Vitamins) /* dream0630 */
{/* dream0630 */
  this->_vitamins = Vitamins;/* dream0630 */
}/* dream0630 */
/* dream0630 */
void Fruit::setName(std::string name) /* dream0630 */
{/* dream0630 */
  this->_name = name;/* dream0630 */
}/* dream0630 */
/* dream0630 */
Fruit::~Fruit() {/* dream0630 */
/* dream0630 */
}/* dream0630 */
/* dream0630 */
Fruit::Fruit() {/* dream0630 */
	this->_name = "";/* dream0630 */
	this->_vitamins = 0;/* dream0630 */
} /* dream0630 */
