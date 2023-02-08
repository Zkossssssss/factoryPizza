#include <iostream>
#include "PizzaStore.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"
using namespace std;

int main() {
	PizzaStore* nyStore = new NYPizzaStore();
	Pizza* pizza1 = nyStore->orderPizza("cheese");
	cout << "Kosty ordered a " << pizza1->getName() << endl;

	PizzaStore* ChicStore = new ChicagoPizzaStore();
	Pizza* pizza2 = ChicStore->orderPizza("cheese");
	cout << "Kosty ordered a " << pizza2->getName() << endl;

	return 0;

}