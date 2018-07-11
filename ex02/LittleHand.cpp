#include <cstring>/* dream0630 */
#include "LittleHand.h"/* dream0630 */
#include "Banana.h"/* dream0630 */
#include "Lemon.h"/* dream0630 */
#include "Lime.h"/* dream0630 */
/* dream0630 */
void LittleHand::sortFruitBox(FruitBox &unsorted,/* dream0630 */
	FruitBox &lemons, FruitBox &bananas, FruitBox &limes)/* dream0630 */
{/* dream0630 */
	int count = unsorted.nbFruits();/* dream0630 */
	for (int i = 0; i < count; i++) {/* dream0630 */
		bool res = false;/* dream0630 */
		Fruit *f = unsorted.pickFruit();/* dream0630 */
		if (dynamic_cast<Lime*>(f) != nullptr)/* dream0630 */
			res = limes.putFruit(f);/* dream0630 */
		else if (dynamic_cast<Lemon*>(f) != nullptr)/* dream0630 */
			res = lemons.putFruit(f);/* dream0630 */
		else if (dynamic_cast<Banana*>(f) != nullptr)/* dream0630 */
			res = bananas.putFruit(f);/* dream0630 */
		if (!res)/* dream0630 */
			unsorted.putFruit(f);/* dream0630 */
	}/* dream0630 */
}/* dream0630 */
/* dream0630 */
FruitBox * const *LittleHand::organizeCoconut(Coconut const * const *coconuts)/* dream0630 */
{/* dream0630 */
	if (!coconuts)/* dream0630 */
		return NULL;/* dream0630 */
	size_t boxes = 0;/* dream0630 */
	FruitBox **res = nullptr;/* dream0630 */
	FruitBox **tmp;/* dream0630 */
	while (*coconuts) {/* dream0630 */
		tmp = new FruitBox*[boxes + 1];/* dream0630 */
		memcpy(tmp, res, boxes * sizeof(*tmp));/* dream0630 */
		delete[] res;/* dream0630 */
		res = tmp;/* dream0630 */
		res[boxes] = new FruitBox(6);/* dream0630 */
		for (int i = 0; i < 6 && *coconuts; i++)/* dream0630 */
			res[boxes]->putFruit(*coconuts++);/* dream0630 */
		boxes++;/* dream0630 */
	}/* dream0630 */
	tmp = new FruitBox*[boxes + 1];/* dream0630 */
	memcpy(tmp, res, boxes * sizeof(*tmp));/* dream0630 */
	delete[] res;/* dream0630 */
	tmp[boxes] = nullptr;/* dream0630 */
	return (tmp);/* dream0630 */
} /* dream0630 */
