#ifndef APPLIANCES_HPP
#define APPLIANCES_HPP

#include "Item.hpp"

class Appliances : public Item {

private:
    int powerConsumption;

public:
    Appliances(const char* name, double price, int powerConsumption);
    Appliances(const Appliances& other);
    Appliances& operator=(const Appliances& other);

    void display() const;

};

#endif // APPLIANCES_HPP
