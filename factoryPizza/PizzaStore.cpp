#include "PizzaStore.h"

Pizza* PizzaStore::orderPizza(string type) {
	Pizza* pizza = createPizza(type);
	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();
	return pizza;
}
