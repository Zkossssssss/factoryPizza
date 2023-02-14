#include "ChicagoPizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleVegitirianPizza.h"

Pizza* ChicagoPizzaStore::createPizza(string type)
{
    if (type == "cheese")
        return new ChicagoStyleCheesePizza();
    else if (type == "vegetitirian")
        return new ChicagoStyleVegitirianPizza();
    else
        return nullptr;

}
