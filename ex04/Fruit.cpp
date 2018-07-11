#include "Fruit.h"/* dream0630 */
/* dream0630 */
Fruit::Fruit(std::string name, int vitamins) :/* dream0630 */
	_name(name), _vitamins(vitamins)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
std::string Fruit::getName() const/* dream0630 */
{/* dream0630 */
	return (this->_name);/* dream0630 */
}/* dream0630 */
/* dream0630 */
int Fruit::getVitamins() const/* dream0630 */
{/* dream0630 */
	return (this->_vitamins);/* dream0630 */
}/* dream0630 */
/* dream0630 */
void Fruit::setVitamins(int vitamins)/* dream0630 */
{/* dream0630 */
	this->_vitamins = vitamins;/* dream0630 */
} /* dream0630 */
