#ifndef LITTLE_HAND_H_/* dream0630 */
#define LITTLE_HAND_H_/* dream0630 */
/* dream0630 */
#include "Coconut.h"/* dream0630 */
#include "FruitBox.h"/* dream0630 */
#include "Mixer.h"/* dream0630 */
/* dream0630 */
class LittleHand {/* dream0630 */
public:/* dream0630 */
	static void sortFruitBox(FruitBox &unsorted,/* dream0630 */
		FruitBox &lemons,/* dream0630 */
		FruitBox &bananas,/* dream0630 */
		FruitBox &limes);/* dream0630 */
	static FruitBox * const *organizeCoconut(/* dream0630 */
		Coconut const * const *coconuts);/* dream0630 */
	static void plugMixer(MixerBase &mixer);/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
