#include <cstring>
#include "LittleHand.h"
#include "Banana.h"
#include "Lemon.h"
#include "Lime.h"

void LittleHand::sortFruitBox(FruitBox &unsorted,
	FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
	int count = unsorted.nbFruits();
	for (int i = 0; i < count; i++) {
		bool res = false;
		Fruit *f = unsorted.pickFruit();
		if (dynamic_cast<Lime*>(f) != NULL)
			res = limes.putFruit(f);
		else if (dynamic_cast<Lemon*>(f) != NULL)
			res = lemons.putFruit(f);
		else if (dynamic_cast<Banana*>(f) != NULL)
			res = bananas.putFruit(f);
		if (!res)
			unsorted.putFruit(f);
	}
}

FruitBox * const *LittleHand::organizeCoconut(Coconut const * const *coconuts)
{
	if (!coconuts)
		return NULL;
	size_t boxes = 0;
	FruitBox **res = NULL;
	FruitBox **tmp;
	while (*coconuts) {
		tmp = new FruitBox*[boxes + 1];
		memcpy(tmp, res, boxes * sizeof(*tmp));
		delete[] res;
		res = tmp;
		res[boxes] = new FruitBox(6);
		for (int i = 0; i < 6 && *coconuts; i++)
			res[boxes]->putFruit(*coconuts++);
		boxes++;
	}
	tmp = new FruitBox*[boxes + 1];
	memcpy(tmp, res, boxes * sizeof(*tmp));
	delete[] res;
	tmp[boxes] = NULL;
	return (tmp);
}

void LittleHand::plugMixer(MixerBase &mixer)
{
	((Mixer&)mixer).plug();
}

void LittleHand::injectVitamin(Fruit &f, int quantity)
{
	f.setVitamins(quantity);
}/* dream0630 */
