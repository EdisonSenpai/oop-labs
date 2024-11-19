#include "Appliances.hpp"

Appliances::Appliances(const char* name, double price, int powerConsumption)
    : Item(name, price), powerConsumption(powerConsumption) {}

Appliances::Appliances(const Appliances& other)
    : Item(other), powerConsumption(other.powerConsumption) {}

Appliances& Appliances::operator=(const Appliances& other) {

    if (this != &other) {

        Item::operator=(other);

        powerConsumption = other.powerConsumption;

    }

    return *this;

}

void Appliances::display() const {

    Item::display();
    std::cout << ", Power Consumption: " << powerConsumption << "W" << std::endl;

}
