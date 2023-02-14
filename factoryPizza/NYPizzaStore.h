#pragma once
#include "PizzaStore.h"
#include "NYStyleCheesePizza.h"
#include "NYStyleVegitirianPizza.h"
class NYPizzaStore : public PizzaStore
{
public:
	Pizza* createPizza(string type);
};

