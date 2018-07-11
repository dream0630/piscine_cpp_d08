#include "Mixer.h"/* dream0630 */
/* dream0630 */
static int mix(FruitBox &fruits)/* dream0630 */
{/* dream0630 */
	int res = 0;/* dream0630 */
	FruitNode *node = fruits.head();/* dream0630 */
	while (node) {/* dream0630 */
		res += node->fruit->getVitamins();/* dream0630 */
		node = node->next;/* dream0630 */
	}/* dream0630 */
	return (res);/* dream0630 */
}/* dream0630 */
/* dream0630 */
Mixer::Mixer()/* dream0630 */
{/* dream0630 */
	this->_mixfunc = ::mix;/* dream0630 */
}/* dream0630 */
/* dream0630 */
void Mixer::plug()/* dream0630 */
{/* dream0630 */
	this->_plugged = true;/* dream0630 */
} /* dream0630 */
