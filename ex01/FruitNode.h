#ifndef FRUIT_NODE_H_/* dream0630 */
#define FRUIT_NODE_H_/* dream0630 */
/* dream0630 */
#include "Fruit.h"/* dream0630 */
/* dream0630 */
#define Fruitnode FruitNode/* dream0630 */
/* dream0630 */
typedef struct FruitNode {/* dream0630 */
	const Fruit *fruit;/* dream0630 */
	struct FruitNode *next;/* dream0630 */
} FruitNode;/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
