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
} /* dream0630 */
