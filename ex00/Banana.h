#ifndef _BANANA_H
#define _BANANA_H


#include "Fruit.h"

class Banana : public Fruit 
{

	private:

	public:

		Banana();
		virtual ~Banana();

		virtual std::string		getName() const;
};


#endif /* dream0630 */
