#ifndef _FRUITBOX_H/* dream0630 */
#define _FRUITBOX_H/* dream0630 */
/* dream0630 */
#include "Fruit.h"/* dream0630 */
#include "FruitNode.h"/* dream0630 */
/* dream0630 */
class FruitBox {/* dream0630 */
/* dream0630 */
private:/* dream0630 */
/* dream0630 */
  FruitNode		*_Fruits;/* dream0630 */
  int			_BoxSize;/* dream0630 */
/* dream0630 */
public:/* dream0630 */
/* dream0630 */
  FruitBox(int size);/* dream0630 */
  ~FruitBox();/* dream0630 */
/* dream0630 */
  int			nbFruits() const;/* dream0630 */
  bool			putFruit(Fruit *fruit);/* dream0630 */
  bool			isFruitPresent(Fruit *fruit);/* dream0630 */
  Fruit			*pickFruit();/* dream0630 */
  FruitNode		*head() const;/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
