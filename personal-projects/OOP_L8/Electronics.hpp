#ifndef ELECTRONICS_HPP
#define ELECTRONICS_HPP

#include "Item.hpp"

class Electronics : public Item {

private:
    char* brand;
    int warranty;

public:
    Electronics(const char* name, double price, const char* brand, int warranty);
    Electronics(const Electronics& other);
    Electronics& operator=(const Electronics& other);
    ~Electronics();

    void display() const;

};

#endif // ELECTRONICS_HPP
