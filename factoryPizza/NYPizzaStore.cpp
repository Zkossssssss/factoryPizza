#include "NYPizzaStore.h"
#include "NYStyleCheesePizza.h"

Pizza* NYPizzaStore::createPizza(string type) {
	if (type == "cheese") {
		return new NYStyleCheesePizza();
	}
	return nullptr;
}
