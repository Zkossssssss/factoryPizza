#include "Pizza.h"

void Pizza::prepare() {
	cout << "preparing..." << name << endl;
	cout << "tossing dough..." << endl;
	cout << "adding sauce..." << endl;
	cout << "adding toppings..." << endl;

	for (string topping : toppings) {
		cout << "\t" << topping << endl;
	}
}

void Pizza::bake() {
	cout << "bake for 25 minutes at 350 C" << endl;
}
void Pizza::cut() {
	cout << "Cutting the pizza into diagonal slices" << endl;
}
void Pizza::box() {
	cout << "Place pizza in original PizzaStore box" << endl;
}
string Pizza::getName() {
	return name;
}