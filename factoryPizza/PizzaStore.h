#pragma once
#include "Pizza.h"
class PizzaStore
{
public:
	Pizza* orderPizza(string type);
protected:
	virtual Pizza* createPizza(string type) = 0;
};

