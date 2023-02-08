#pragma once
#include "PizzaStore.h"
class ChicagoPizzaStore : public PizzaStore
{
public:
	Pizza* createPizza(string type);
};
