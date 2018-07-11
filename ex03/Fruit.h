#ifndef FRUIT_h_/* dream0630 */
#define FRUIT_h_/* dream0630 */
/* dream0630 */
#include <string>/* dream0630 */
/* dream0630 */
class Fruit {/* dream0630 */
public:/* dream0630 */
	virtual ~Fruit() {}/* dream0630 */
/* dream0630 */
	virtual std::string getName() const;/* dream0630 */
	int getVitamins() const;/* dream0630 */
/* dream0630 */
protected:/* dream0630 */
	Fruit(std::string name, int vitamins);/* dream0630 */
/* dream0630 */
	const std::string _name;/* dream0630 */
	int _vitamins;/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
