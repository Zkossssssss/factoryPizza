#pragma once
#include "PizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleVegitirianPizza.h"
class ChicagoPizzaStore : public PizzaStore
{
public:
	Pizza* createPizza(string type);
};
