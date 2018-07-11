#include "FruitBox.h"/* dream0630 */
/* dream0630 */
FruitBox::FruitBox(unsigned int capacity) :/* dream0630 */
	_count(0), _capacity(capacity), _head(nullptr)/* dream0630 */
{/* dream0630 */
}/* dream0630 */
/* dream0630 */
FruitBox::~FruitBox()/* dream0630 */
{/* dream0630 */
	FruitNode *node = this->_head;/* dream0630 */
	while (node) {/* dream0630 */
		FruitNode *next = node->next;/* dream0630 */
		delete node;/* dream0630 */
		node = next;/* dream0630 */
	}/* dream0630 */
}/* dream0630 */
/* dream0630 */
int FruitBox::nbFruits() const/* dream0630 */
{/* dream0630 */
	return (this->_count);/* dream0630 */
}/* dream0630 */
/* dream0630 */
bool FruitBox::putFruit(const Fruit *f)/* dream0630 */
{/* dream0630 */
	if (this->_count == this->_capacity)/* dream0630 */
		return (false);/* dream0630 */
	FruitNode **node_ptr = &this->_head;/* dream0630 */
	while (*node_ptr) {/* dream0630 */
		if (*node_ptr && (*node_ptr)->fruit == f)/* dream0630 */
			return (false);/* dream0630 */
		node_ptr = &(*node_ptr)->next;/* dream0630 */
	}/* dream0630 */
	FruitNode *node = new FruitNode;/* dream0630 */
	node->fruit = f;/* dream0630 */
	node->next = nullptr;/* dream0630 */
	*node_ptr = node;/* dream0630 */
	this->_count++;/* dream0630 */
	return (true);/* dream0630 */
}/* dream0630 */
/* dream0630 */
Fruit *FruitBox::pickFruit()/* dream0630 */
{/* dream0630 */
	FruitNode *node = this->_head;/* dream0630 */
	if (!node)/* dream0630 */
		return (nullptr);/* dream0630 */
	this->_head = node->next;/* dream0630 */
	const Fruit *res = node->fruit;/* dream0630 */
	delete node;/* dream0630 */
	this->_count--;/* dream0630 */
	return ((Fruit*)res);/* dream0630 */
}/* dream0630 */
/* dream0630 */
FruitNode *FruitBox::head() const/* dream0630 */
{/* dream0630 */
	return (this->_head);/* dream0630 */
}/* dream0630 */
