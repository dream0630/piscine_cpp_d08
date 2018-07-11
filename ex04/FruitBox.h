#ifndef FRUIT_BOX_H_/* dream0630 */
#define FRUIT_BOX_H_/* dream0630 */
/* dream0630 */
#include "FruitNode.h"/* dream0630 */
/* dream0630 */
class FruitBox {/* dream0630 */
public:/* dream0630 */
	FruitBox(unsigned int capacity);/* dream0630 */
	FruitBox(const FruitBox &other) = delete;/* dream0630 */
	~FruitBox();/* dream0630 */
/* dream0630 */
	FruitBox &operator=(const FruitBox &other) = delete;/* dream0630 */
/* dream0630 */
	int nbFruits() const;/* dream0630 */
	bool putFruit(const Fruit *f);/* dream0630 */
	Fruit *pickFruit();/* dream0630 */
	FruitNode *head() const;/* dream0630 */
/* dream0630 */
private:/* dream0630 */
	unsigned int _count;/* dream0630 */
	const unsigned int _capacity;/* dream0630 */
	FruitNode *_head;/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
