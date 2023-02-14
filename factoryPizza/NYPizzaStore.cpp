#include "NYPizzaStore.h"
#include "NYStyleCheesePizza.h"
#include "NYStyleVegitirianPizza.h"

Pizza* NYPizzaStore::createPizza(string type) 
{
    if (type == "cheese")
        return new NYStyleCheesePizza();
    else if (type == "vegetitirian")
        return new NYStyleVegitirianPizza();
    else
        return nullptr;
}

