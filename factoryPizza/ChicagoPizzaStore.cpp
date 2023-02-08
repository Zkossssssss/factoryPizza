#include "ChicagoPizzaStore.h"
#include "ChicagoStyleCheesePizza.h"

Pizza* ChicagoPizzaStore::createPizza(string type) {
	if (type == "cheese") {
		return new ChicagoStyleCheesePizza();
	}
	return nullptr;
}

